/* Befehle:
pinMode(PIN, OUTPUT oder INPUT); <- definiert den PIN, OUTPUT gibt Strom und INPUT misst den Strom am PIN
delay(ZEIT); <- macht eine Pause mit der ZEIT in millisekunden
analogWrite(PIN, 0 bis 255); <- NEU: neben digital gibt es auch analoge Signale. Hier gibt es nicht nur HIGH oder LOW, sondern eine Zahl von 0 bis 255.
*/

//Zuerst die Variabeln definieren

// TODO: Verbinde die RGB LED mit dem Sensorkit. Am Besten verbindest du die [- R G B] Pins mit den Pins [GND 11~ 10~ 9~].

// TODO: Farbe rot an Pin XXX -> Wichtig nur PWM(~) nutzen! Auf deinem Arduino sind dies die Nummern mit einer kleinen Welle -> z.B. 10~
int LEDrot = XX; 
// TODO: Farbe gruen an Pin XX -> Wichtig nur PWM(~) nutzen! 
int LEDgruen = XX; 
// TODO: Farbe blau an Pin XX -> Wichtig nur PWM(~) nutzen! 


int RotHelligkeit = 255; //TEST: Variable für das Einschalten
int GruenHelligkeit = 255; //TEST: Variable für das Einschalten
int BlauHelligkeit = 255; //TEST: Variable für das Einschalten

//TODO: Ersetze das Z mit der Zahl zum Ausschalten

int RotAus = Z; //TEST: Variable für das Ausschalten
int GruenAus = Z; //TEST: Variable für das Ausschalten
int BlauAus = Z; //TEST: Variable für das Ausschalten

void setup()
{
//TODO: Definiere den richtigen Pin für die rote LED (INPUT oder OUTPUT?)

//TODO: Definiere den richtigen Pin für die grüne LED

//TODO: Definiere den richtigen Pin für die blaue LED
  
}

void loop()
{
  analogWrite(LEDrot, RotHelligkeit); //Jetzt wird der PIN für die rote LED genommen und die Helligkeit von der Variabel
  delay(1000);
  analogWrite(LEDrot, RotAus);
  // TODO: Lasse alle anderen RGB-Farben auch NACHEINANDER leuchten -> Vergiss den delay nicht!

  
  // TODO: Lasse alle Farben gleichzeitig leuchten -> Was passiert?
  

  // TODO: Lasse Rot und Grün gleichzeitig leuchten -> Was passiert?


  // TEST: Was passiert, wenn du die Helligkeit mit einer Zahl zwischen 0-255 ersetzt? 
  
  
  //TEST: Was passiert wenn alle Farben verschiedene Zahlen haben?
  

}