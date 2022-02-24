// C++ version
// Working as intended


using namespace std;

int speed = 300; //lower is faster
String entrada = "sos"; // write your input here


void dit()
{
  digitalWrite(8, HIGH);
  delay(speed);
 digitalWrite(8, LOW);
  delay(speed);
}

void dah()
{
  digitalWrite(8, HIGH);
  delay(3*speed);
 digitalWrite(8, LOW);
  delay(speed);
}

String char2morse(char a)
{
  if(a == 'a') {return ".-";} else{
if(a == 'b') {return "-...";} else{
if(a == 'c') {return "-.-.";} else{
if(a == 'd') {return "-..";} else{
if(a == 'e') {return ".";} else{
if(a == 'f') {return "..-.";} else{
if(a == 'g') {return "--.";} else{
if(a == 'h') {return "....";} else{
if(a == 'i') {return "..";} else{
if(a == 'j') {return ".---";} else{
if(a == 'k') {return "-.-";} else{
if(a == 'l') {return ".-..";} else{
if(a == 'm') {return "--";} else{
if(a == 'n') {return "-.";} else{
if(a == 'o') {return "---";} else{
if(a == 'p') {return ".--.";} else{
if(a == 'q') {return "--.-";} else{
if(a == 'r') {return ".-.";} else{
if(a == 's') {return "...";} else{
if(a == 't') {return "-";} else{
if(a == 'u') {return "..-";} else{
if(a == 'v') {return "...-";} else{
if(a == 'w') {return ".--";} else{
if(a == 'x') {return "-..-";} else{
if(a == 'y') {return "-.--";} else{
if(a == 'z') {return "--..";} else{
if(a == '1') {return ".----";} else{
if(a == '2') {return "..---";} else{
if(a == '3') {return "...--";} else{
if(a == '4') {return "....-";} else{
if(a == '5') {return ".....";} else{
if(a == '6') {return "-....";} else{
if(a == '7') {return "--...";} else{
if(a == '8') {return "---..";} else{
if(a == '9') {return "----.";} else{
if(a == '0') {return "-----";} else{
if(a == '.') {return ".-.-.-";} else{
if(a == ',') {return "--..--";} else{
if(a == '?') {return "..--..";} else{
if(a == '\\') {return  ".----.";} else{
if(a == '!') {return "-.-.--";} else{
if(a == '/') {return "-..-.";}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}

void blinkString(String a)
{
  for (auto Atual: a)
  {
    if (Atual == ' ')
    {delay(speed*6);}
    
    String morseAtual = char2morse(Atual);
    for (auto digito: morseAtual)
    {
      if (digito == '.') {dit();}
      if (digito == '-') {dah();}
    }
    
    delay(speed * 2);
  }
}

  
void setup()
{
 pinMode(8, OUTPUT);
}


  

void loop()
{
 blinkString(entrada);
 entrada = "";
  
}
