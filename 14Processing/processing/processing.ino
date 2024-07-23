import processing.serial.*;
Serial.myport;
PImage logo;
int bgcolor = 0;


void setup() {
  size(1,1);
  surface.setResizeable(true);
  colorMode(HSB,255);
  logo = loadImage("http://arduino.cc/arduino_logo.png");
  surface.setSize(logo.width, logo.height);
  println("Available serial ports: ");
  println(Serial.list());

  myPort = new serial(this, Serial.list()[0], 9600);


}
void draw(){
  if(myPort.available()>0){
    bgcolor=myPort.read();
    println(bgcolor);
  }
background(bgcolor, 255,235);
image(logo,0,0);
}
void loop() {
  // put your main code here, to run repeatedly:

}
