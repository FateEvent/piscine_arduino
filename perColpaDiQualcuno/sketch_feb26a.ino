#define A  8
#define B  7
#define C  6
#define D  5
#define E  4
#define F  3
#define G  2

void  refresh_display()
{
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
}

void  display_num(char num)
{
  if (num == '0')
  {
	digitalWrite(A, HIGH);
	digitalWrite(B, HIGH);
	digitalWrite(C, HIGH);
	digitalWrite(D, HIGH);
	digitalWrite(E, HIGH);
	digitalWrite(F, HIGH);
	digitalWrite(G, LOW);
  }
  else if (num == '1')
  {
	digitalWrite(A, LOW);
	digitalWrite(B, HIGH);
	digitalWrite(C, HIGH);
	digitalWrite(D, LOW);
	digitalWrite(E, LOW);
	digitalWrite(F, LOW);
	digitalWrite(G, LOW);
  }
  else if (num == '2')
  {
	digitalWrite(A, HIGH);
	digitalWrite(B, HIGH);
	digitalWrite(C, LOW);
	digitalWrite(D, HIGH);
	digitalWrite(E, HIGH);
	digitalWrite(F, LOW);
	digitalWrite(G, HIGH);
  }
  else if (num == '3')
  {
	digitalWrite(A, HIGH);
	digitalWrite(B, HIGH);
	digitalWrite(C, HIGH);
	digitalWrite(D, HIGH);
	digitalWrite(E, LOW);
	digitalWrite(F, LOW);
	digitalWrite(G, HIGH);
  }
  else if (num == '4')
  {
	digitalWrite(A, LOW);
	digitalWrite(B, HIGH);
	digitalWrite(C, HIGH);
	digitalWrite(D, LOW);
	digitalWrite(E, LOW);
	digitalWrite(F, HIGH);
	digitalWrite(G, HIGH);
  }
  else if (num == '5')
  {
	digitalWrite(A, HIGH);
	digitalWrite(B, LOW);
	digitalWrite(C, HIGH);
	digitalWrite(D, HIGH);
	digitalWrite(E, LOW);
	digitalWrite(F, HIGH);
	digitalWrite(G, HIGH);
  }
  else if (num == '6')
  {
	digitalWrite(A, HIGH);
	digitalWrite(B, LOW);
	digitalWrite(C, HIGH);
	digitalWrite(D, HIGH);
	digitalWrite(E, HIGH);
	digitalWrite(F, HIGH);
	digitalWrite(G, HIGH);
  }
  else if (num == '7')
  {
	digitalWrite(A, HIGH);
	digitalWrite(B, HIGH);
	digitalWrite(C, HIGH);
	digitalWrite(D, LOW);
	digitalWrite(E, LOW);
	digitalWrite(F, LOW);
	digitalWrite(G, LOW);
  }
  else if (num == '8')
  {
	digitalWrite(A, HIGH);
	digitalWrite(B, HIGH);
	digitalWrite(C, HIGH);
	digitalWrite(D, HIGH);
	digitalWrite(E, HIGH);
	digitalWrite(F, HIGH);
	digitalWrite(G, HIGH);
  }
  else if (num == '9')
  {
	digitalWrite(A, HIGH);
	digitalWrite(B, HIGH);
	digitalWrite(C, HIGH);
	digitalWrite(D, HIGH);
	digitalWrite(E, LOW);
	digitalWrite(F, HIGH);
	digitalWrite(G, HIGH);
  }
}

void  display_letter(char c)
{
  if (c == 'a')
  {
	digitalWrite(A, HIGH);
	digitalWrite(B, HIGH);
	digitalWrite(C, HIGH);
	digitalWrite(D, LOW);
	digitalWrite(E, HIGH);
	digitalWrite(F, HIGH);
	digitalWrite(G, HIGH);
  }
  else if (c == 'b')
  {
	digitalWrite(A, LOW);
	digitalWrite(B, LOW);
	digitalWrite(C, HIGH);
	digitalWrite(D, HIGH);
	digitalWrite(E, HIGH);
	digitalWrite(F, HIGH);
	digitalWrite(G, HIGH);
  }
  else if (c == 'c')
  {
	digitalWrite(A, HIGH);
	digitalWrite(B, LOW);
	digitalWrite(C, LOW);
	digitalWrite(D, HIGH);
	digitalWrite(E, HIGH);
	digitalWrite(F, HIGH);
	digitalWrite(G, LOW);
  }
  else if (c == 'd')
  {
	digitalWrite(A, LOW);
	digitalWrite(B, HIGH);
	digitalWrite(C, HIGH);
	digitalWrite(D, HIGH);
	digitalWrite(E, HIGH);
	digitalWrite(F, LOW);
	digitalWrite(G, HIGH);
  }
  else if (c == 'e')
  {
	digitalWrite(A, HIGH);
	digitalWrite(B, LOW);
	digitalWrite(C, LOW);
	digitalWrite(D, HIGH);
	digitalWrite(E, HIGH);
	digitalWrite(F, HIGH);
	digitalWrite(G, HIGH);
  }
  else if (c == 'f')
  {
	digitalWrite(A, HIGH);
	digitalWrite(B, LOW);
	digitalWrite(C, LOW);
	digitalWrite(D, LOW);
	digitalWrite(E, HIGH);
	digitalWrite(F, HIGH);
	digitalWrite(G, HIGH);
  }
  else if (c == 'g')
  {
	digitalWrite(A, HIGH);
	digitalWrite(B, HIGH);
	digitalWrite(C, HIGH);
	digitalWrite(D, HIGH);
	digitalWrite(E, LOW);
	digitalWrite(F, HIGH);
	digitalWrite(G, HIGH);
  }
  else if (c == 'h')
  {
	digitalWrite(A, LOW);
	digitalWrite(B, LOW);
	digitalWrite(C, HIGH);
	digitalWrite(D, LOW);
	digitalWrite(E, HIGH);
	digitalWrite(F, HIGH);
	digitalWrite(G, HIGH);
  }
  else if (c == 'i')
  {
	digitalWrite(A, LOW);
	digitalWrite(B, HIGH);
	digitalWrite(C, HIGH);
	digitalWrite(D, LOW);
	digitalWrite(E, LOW);
	digitalWrite(F, LOW);
	digitalWrite(G, LOW);
  }
  else if (c == 'j')
  {
	digitalWrite(A, LOW);
	digitalWrite(B, HIGH);
	digitalWrite(C, HIGH);
	digitalWrite(D, HIGH);
	digitalWrite(E, HIGH);
	digitalWrite(F, LOW);
	digitalWrite(G, LOW);
  }
  else if (c == 'k')
  {
	digitalWrite(A, LOW);
	digitalWrite(B, HIGH);
	digitalWrite(C, HIGH);
	digitalWrite(D, LOW);
	digitalWrite(E, HIGH);
	digitalWrite(F, HIGH);
	digitalWrite(G, HIGH);
  }
  else if (c == 'l')
  {
	digitalWrite(A, LOW);
	digitalWrite(B, LOW);
	digitalWrite(C, LOW);
	digitalWrite(D, HIGH);
	digitalWrite(E, HIGH);
	digitalWrite(F, HIGH);
	digitalWrite(G, LOW);
  }
  else if (c == 'm')
  {
	digitalWrite(A, HIGH);
	digitalWrite(B, HIGH);
	digitalWrite(C, HIGH);
	digitalWrite(D, LOW);
	digitalWrite(E, HIGH);
	digitalWrite(F, HIGH);
	digitalWrite(G, LOW);
  }
  else if (c == 'n')
  {
	digitalWrite(A, LOW);
	digitalWrite(B, LOW);
	digitalWrite(C, HIGH);
	digitalWrite(D, LOW);
	digitalWrite(E, HIGH);
	digitalWrite(F, LOW);
	digitalWrite(G, HIGH);
  }
  else if (c == 'o')
  {
	digitalWrite(A, HIGH);
	digitalWrite(B, HIGH);
	digitalWrite(C, HIGH);
	digitalWrite(D, HIGH);
	digitalWrite(E, HIGH);
	digitalWrite(F, HIGH);
	digitalWrite(G, LOW);
  }
  else if (c == 'p')
  {
	digitalWrite(A, HIGH);
	digitalWrite(B, HIGH);
	digitalWrite(C, LOW);
	digitalWrite(D, LOW);
	digitalWrite(E, HIGH);
	digitalWrite(F, HIGH);
	digitalWrite(G, HIGH);
  }
  else if (c == 'q')
  {
	digitalWrite(A, HIGH);
	digitalWrite(B, HIGH);
	digitalWrite(C, HIGH);
	digitalWrite(D, LOW);
	digitalWrite(E, LOW);
	digitalWrite(F, HIGH);
	digitalWrite(G, HIGH);
  }
  else if (c == 'r')
  {
	digitalWrite(A, LOW);
	digitalWrite(B, LOW);
	digitalWrite(C, LOW);
	digitalWrite(D, LOW);
	digitalWrite(E, HIGH);
	digitalWrite(F, LOW);
	digitalWrite(G, HIGH);
  }
  else if (c == 's')
  {
	digitalWrite(A, HIGH);
	digitalWrite(B, LOW);
	digitalWrite(C, HIGH);
	digitalWrite(D, HIGH);
	digitalWrite(E, LOW);
	digitalWrite(F, HIGH);
	digitalWrite(G, HIGH);
  }
  else if (c == 't')
  {
	digitalWrite(A, LOW);
	digitalWrite(B, LOW);
	digitalWrite(C, LOW);
	digitalWrite(D, HIGH);
	digitalWrite(E, HIGH);
	digitalWrite(F, HIGH);
	digitalWrite(G, HIGH);
  }
  else if (c == 'u')
  {
	digitalWrite(A, LOW);
	digitalWrite(B, HIGH);
	digitalWrite(C, HIGH);
	digitalWrite(D, HIGH);
	digitalWrite(E, HIGH);
	digitalWrite(F, HIGH);
	digitalWrite(G, LOW);
  }
  else if (c == 'v')
  {
	digitalWrite(A, LOW);
	digitalWrite(B, HIGH);
	digitalWrite(C, HIGH);
	digitalWrite(D, HIGH);
	digitalWrite(E, HIGH);
	digitalWrite(F, HIGH);
	digitalWrite(G, LOW);
  }
  else if (c == 'w')
  {
	digitalWrite(A, LOW);
	digitalWrite(B, HIGH);
	digitalWrite(C, HIGH);
	digitalWrite(D, HIGH);
	digitalWrite(E, HIGH);
	digitalWrite(F, HIGH);
	digitalWrite(G, LOW);
  }
  else if (c == 'x')
  {
	digitalWrite(A, LOW);
	digitalWrite(B, HIGH);
	digitalWrite(C, HIGH);
	digitalWrite(D, LOW);
	digitalWrite(E, HIGH);
	digitalWrite(F, HIGH);
	digitalWrite(G, HIGH);
  }
  else if (c == 'y')
  {
	digitalWrite(A, LOW);
	digitalWrite(B, HIGH);
	digitalWrite(C, HIGH);
	digitalWrite(D, LOW);
	digitalWrite(E, LOW);
	digitalWrite(F, HIGH);
	digitalWrite(G, HIGH);
  }
  else if (c == 'z')
  {
	digitalWrite(A, HIGH);
	digitalWrite(B, HIGH);
	digitalWrite(C, LOW);
	digitalWrite(D, HIGH);
	digitalWrite(E, HIGH);
	digitalWrite(F, LOW);
	digitalWrite(G, HIGH);
  }
}

void  display_char(char c)
{
  if (c >= 65 && c <= 90)
	c += 32;
  if (c >= 97 && c <= 122)
	display_letter(c);
  else if (c == ' ')
  {
	digitalWrite(A, LOW);
	digitalWrite(B, LOW);
	digitalWrite(C, LOW);
	digitalWrite(D, LOW);
	digitalWrite(E, LOW);
	digitalWrite(F, LOW);
	digitalWrite(G, LOW);
  }
}

void setup() {
   pinMode(A, OUTPUT);
   pinMode(B, OUTPUT);
   pinMode(C, OUTPUT);
   pinMode(D, OUTPUT);
   pinMode(E, OUTPUT);
   pinMode(F, OUTPUT);
   pinMode(G, OUTPUT);
}

char  str[21] = "Hola Zuleimita linda";

void loop() {
  for (char i = 0; str[i] != '\0'; i++)
  {
	display_char(str[i]);
	delay(500);
	refresh_display();
	delay(50);
  }
}
