import processing.serial.*;  // Importerar serial biblioteket

Serial myPort;  // Deklarerar en Serial variabel
PImage logo;  // Deklarerar en PImage variabel för att lagra bilden
int bgcolor = 0;  // Initialiserar bakgrundsfärgen

void setup() {
  size(1, 1);  // Sätter initial fönsterstorlek till 1x1 pixel
  surface.setResizable(true);  // Gör fönstret skalbart
  colorMode(HSB, 255);  // Ställer in färgläge till HSB med max värde 255
  logo = loadImage("https://brandslogos.com/wp-content/uploads/images/large/arduino-logo-1.png");  // Laddar bilden från webben
  surface.setSize(logo.width, logo.height);  // Sätter fönstrets storlek till bildens storlek

  println("Available serial ports: ");
  println(Serial.list());  // Skriver ut tillgängliga serielportar

  // Initialiserar serielporten med första tillgängliga port och 9600 baudrate
  myPort = new Serial(this, "COM3",9600);
}

void draw() {
  if (myPort.available() > 0) {  // Om data är tillgänglig på serielporten
    bgcolor = myPort.read();  // Läs ett byte och använd det som bakgrundsfärg
    println(bgcolor);  // Skriv ut det mottagna värdet
  }
  background(bgcolor, 255, 235);  // Sätt bakgrundsfärgen
  image(logo, 0, 0);  // Rita bilden på skärmen
}

void loop() {
  // Denna funktion används inte i Processing, ta bort eller ignorera
}
