void do_actions(const char* message) {
  //Create this function according to your actions. you will receive a message something like this
Serial.println(message);
   
StaticJsonBuffer<200> jsonBuffer;

JsonObject& root = jsonBuffer.parseObject(message);

String action = root["action"];

JsonObject& param = root["param"]; 
String param_mac = param["mac"]; 

  if(param_mac.equals(MAC_ADDRESS)){
    if(action == "on"){
    digitalWrite(D1,HIGH);
    Serial.println("on");
} 
    if(action == "off"){
    digitalWrite(D1,LOW);
    Serial.println("off");
    }      
  }
}
//====================================================================================================================================================================
