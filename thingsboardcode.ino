#include <PubSubClient.h>
#include <ESP8266WiFi.h>
int flowPin = 2;  
int i=0;  
double flowRate;
float total=0;
float water; 
float a[2000];
volatile int count; 
const char* ssid = "wifi name";
const char* password = "password";

#define TOKEN "token" //Access token of device Display
char ThingsboardHost[] = "demo.thingsboard.io";//TOKEN

WiFiClient wifiClient;
PubSubClient client(wifiClient);
int status = WL_IDLE_STATUS;

void setup()
{
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  pinMode(flowPin, INPUT);         
  attachInterrupt(0, Flow, RISING); 
  while (WiFi.status() != WL_CONNECTED) {
    delay(200);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("connected to");
  Serial.println(ssid);
  client.setServer( ThingsboardHost, 1883 );
}

void loop()
{

water();
  
}

void water()
{
  count = 0;    
  interrupts();   
  delay (1000);   
  noInterrupts();
   
  
  
  flowRate = (count * 2.25);        
  flowRate = flowRate * 60;         
  flowRate = flowRate / 1000;      
  
   a[i]=flowRate;
   total=total+a[i];
   delay(1000);     
   i=i+1;
   if(i==1440)
   {
  water=(total/i)*1440;
  i=0;
  total=0;
  if ( !client.connected() ) 
{
    reconnect();
}


 
  // Prepare a JSON payload string
  String payload = "{";
 payload += "\"water used\":";payload += water; payload += ",";
 payload += "\"on this day\":"; 
  payload += "}";

  char attributes[1000];
  payload.toCharArray( attributes, 1000 );
  client.publish( "v1/devices/me/telemetry",attributes);
  Serial.println( attributes );
   
}

void reconnect() {
  // Loop until we're reconnected
  while (!client.connected()) {
    status = WiFi.status();
    if ( status != WL_CONNECTED) {
      WiFi.begin(ssid, password);
      while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
      }
      Serial.println("Connected to AP");
    }
    Serial.print("Connecting to ThingsBoard node ...");
    // Attempt to connect (clientId, username, password)
    if ( client.connect("Esp8266", TOKEN, NULL) ) {
      Serial.println( "[DONE]" );
    } else {
      Serial.print( "[FAILED] [ rc = " );
      Serial.println( " : retrying in 5 seconds]" );
      delay( 500 );
    }
  }
}
void Flow()
{
   count++; 
}
