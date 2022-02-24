// C++ version
// Non-functional in Arduino



using namespace std;


int speed = 300; //lower is faster
string input = "sos"; // write your input here

map<char, string> char2morse;
char2morse['a'] = ".-";
char2morse['b'] = "-...";
char2morse['c'] = "-.-.";
char2morse['d'] = "-..";
char2morse['e'] = ".";
char2morse['f'] = "..-.";
char2morse['g'] = "--.";
char2morse['h'] = "....";
char2morse['i'] = "..";
char2morse['j'] = ".---";
char2morse['k'] = "-.-";
char2morse['l'] = ".-..";
char2morse['m'] = "--";
char2morse['n'] = "-.";
char2morse['o'] = "---";
char2morse['p'] = ".--.";
char2morse['q'] = "--.-";
char2morse['r'] = ".-.";
char2morse['s'] = "...";
char2morse['t'] = "-";
char2morse['u'] = "..-";
char2morse['v'] = "...-";
char2morse['w'] = ".--";
char2morse['x'] = "-..-";
char2morse['y'] = "-.--";
char2morse['z'] = "--..";
char2morse[' '] = ".";
char2morse['1'] = ".----";
char2morse['2'] = "..---";
char2morse['3'] = "...--";
char2morse['4'] = "....-";
char2morse['5'] = ".....";
char2morse['6'] = "-....";
char2morse['7'] = "--...";
char2morse['8'] = "---..";
char2morse['9'] = "----.";
char2morse['0'] = "-----";
char2morse['.'] = ".-.-.-";
char2morse[','] = "--..--";
char2morse['?'] = "..--..";
char2morse['\''] = ".----.";
char2morse['!'] = "-.-.--";
char2morse['/'] = "-..-.";
char2morse['('] = "-.--.";
char2morse[')'] = "-.--.-";
char2morse['&'] = ".-...";
char2morse[':'] = "---...";
char2morse[';'] = "-.-.-.";
char2morse['='] = "-...-";
char2morse['+'] = ".-.-.";
char2morse['-'] = "-....-";
char2morse['_'] = "..--.-";
char2morse['\"'] = ".-..-.";
char2morse['$'] = "...-..-";
char2morse['@'] = ".--.-.";



void dit()
{
  digitalWrite(8, HIGH);
  delay(speed);
 digitalWrite(8, LOW);
  delay(speed);
}

void dit()
{
  digitalWrite(8, HIGH);
  delay(3*speed);
 digitalWrite(8, LOW);
  delay(speed);
}


  
void setup()
{
 pinMode(8, OUTPUT);
}


  

void loop()
{
 for(auto letra: input)
 {
   morseAtual = char2morse[letra]
   for(auto sinal: morseAtual)
   {
     if(sinal == '.'){dit();}
     else{dah()}
   }
 }
 input = "";
  
}

