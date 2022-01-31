

#define N 5
#define M 7


bool chars[][M][N] = {
  0, 0, 1, 0, 0, 
  0, 1, 0, 1, 0, 
  1, 0, 0, 0, 1, 
  1, 0, 0, 0, 1, 
  1, 1, 1, 1, 1, 
  1, 0, 0, 0, 1, 
  1, 0, 0, 0, 1, 

  1, 1, 1, 1, 0, 
  1, 0, 0, 0, 1, 
  1, 0, 0, 0, 1, 
  1, 1, 1, 1, 0, 
  1, 0, 0, 0, 1, 
  1, 0, 0, 0, 1, 
  1, 1, 1, 1, 1, 

  0, 0, 1, 1, 1, 
  0, 1, 0, 0, 0, 
  1, 0, 0, 0, 0, 
  1, 0, 0, 0, 0, 
  1, 0, 0, 0, 0, 
  0, 1, 0, 0, 0, 
  0, 0, 1, 1, 1, 

  1, 1, 1, 0, 0, 
  1, 0, 0, 1, 0, 
  1, 0, 0, 0, 1, 
  1, 0, 0, 0, 1, 
  1, 0, 0, 0, 1, 
  1, 0, 0, 1, 0, 
  1, 1, 1, 0, 0, 

  1, 1, 1, 1, 1, 
  1, 0, 0, 0, 0, 
  1, 0, 0, 0, 0, 
  1, 1, 1, 1, 0, 
  1, 0, 0, 0, 0, 
  1, 0, 0, 0, 0, 
  1, 1, 1, 1, 1, 

  1, 1, 1, 1, 1, 
  1, 0, 0, 0, 0, 
  1, 0, 0, 0, 0, 
  1, 1, 1, 1, 0, 
  1, 0, 0, 0, 0, 
  1, 0, 0, 0, 0, 
  1, 0, 0, 0, 0, 

  0, 1, 1, 1, 0, 
  1, 0, 0, 0, 1, 
  1, 0, 0, 0, 0, 
  1, 0, 1, 1, 1, 
  1, 0, 0, 0, 1, 
  1, 0, 0, 0, 1, 
  0, 1, 1, 1, 0, 

  1, 0, 0, 0, 1, 
  1, 0, 0, 0, 1, 
  1, 0, 0, 0, 1, 
  1, 1, 1, 1, 1, 
  1, 0, 0, 0, 1, 
  1, 0, 0, 0, 1, 
  1, 0, 0, 0, 1, 

  0, 1, 1, 1, 0, 
  0, 0, 1, 0, 0, 
  0, 0, 1, 0, 0, 
  0, 0, 1, 0, 0, 
  0, 0, 1, 0, 0, 
  0, 0, 1, 0, 0, 
  0, 1, 1, 1, 0, 

  0, 0, 1, 1, 1, 
  0, 0, 0, 1, 0, 
  0, 0, 0, 1, 0, 
  0, 0, 0, 1, 0, 
  1, 0, 0, 1, 0, 
  1, 0, 0, 1, 0, 
  0, 1, 1, 0, 0, 

  1, 0, 0, 0, 1, 
  1, 0, 0, 1, 0, 
  1, 0, 1, 0, 0, 
  1, 1, 0, 0, 0, 
  1, 0, 1, 0, 0, 
  1, 0, 0, 1, 0, 
  1, 0, 0, 0, 1, 

  1, 0, 0, 0, 0, 
  1, 0, 0, 0, 0, 
  1, 0, 0, 0, 0, 
  1, 0, 0, 0, 0, 
  1, 0, 0, 0, 0, 
  1, 0, 0, 0, 0, 
  1, 1, 1, 1, 1, 

  1, 0, 0, 0, 1, 
  1, 1, 0, 1, 1, 
  1, 1, 1, 1, 1, 
  1, 0, 1, 0, 1, 
  1, 0, 0, 0, 1, 
  1, 0, 0, 0, 1, 
  1, 0, 0, 0, 1, 

  1, 0, 0, 0, 1, 
  1, 1, 0, 0, 1, 
  1, 1, 1, 0, 1, 
  1, 0, 1, 0, 1, 
  1, 0, 1, 1, 1, 
  1, 0, 0, 1, 1, 
  1, 0, 0, 0, 1, 

  0, 1, 1, 1, 0, 
  1, 0, 0, 0, 1, 
  1, 0, 0, 0, 1, 
  1, 0, 0, 0, 1, 
  1, 0, 0, 0, 1, 
  1, 0, 0, 0, 1, 
  0, 1, 1, 1, 0, 

  1, 1, 1, 1, 0, 
  1, 0, 0, 0, 1, 
  1, 0, 0, 0, 1, 
  1, 1, 1, 1, 0, 
  1, 0, 0, 0, 0, 
  1, 0, 0, 0, 0, 
  1, 0, 0, 0, 0, 

  0, 1, 1, 1, 0, 
  1, 0, 0, 0, 1, 
  1, 0, 0, 0, 1, 
  1, 0, 1, 0, 1, 
  1, 0, 0, 1, 1, 
  1, 0, 0, 1, 0, 
  0, 1, 1, 0, 1, 

  1, 1, 1, 1, 0, 
  1, 0, 0, 0, 1, 
  1, 0, 0, 0, 1, 
  1, 1, 1, 1, 0, 
  1, 0, 1, 0, 0, 
  1, 0, 0, 1, 0, 
  1, 0, 0, 0, 1, 

  0, 1, 1, 1, 1, 
  1, 0, 0, 0, 0, 
  1, 0, 0, 0, 0, 
  0, 1, 1, 1, 0, 
  0, 0, 0, 0, 1, 
  0, 0, 0, 0, 1, 
  1, 1, 1, 1, 0, 

  1, 1, 1, 1, 1, 
  0, 0, 1, 0, 0, 
  0, 0, 1, 0, 0, 
  0, 0, 1, 0, 0, 
  0, 0, 1, 0, 0, 
  0, 0, 1, 0, 0, 
  0, 0, 1, 0, 0, 

  1, 0, 0, 0, 1, 
  1, 0, 0, 0, 1, 
  1, 0, 0, 0, 1, 
  1, 0, 0, 0, 1, 
  1, 0, 0, 0, 1, 
  1, 0, 0, 0, 1, 
  0, 1, 1, 1, 0, 

  1, 0, 0, 0, 1, 
  1, 0, 0, 0, 1, 
  1, 0, 0, 0, 1, 
  1, 0, 0, 0, 1, 
  0, 1, 0, 1, 0, 
  0, 1, 0, 1, 0, 
  0, 0, 1, 0, 0, 

  1, 0, 0, 0, 1, 
  1, 0, 0, 0, 1, 
  1, 0, 0, 0, 1, 
  1, 0, 1, 0, 1, 
  1, 1, 1, 1, 1, 
  1, 1, 0, 1, 1, 
  1, 0, 0, 0, 1, 

  1, 0, 0, 0, 1, 
  1, 1, 0, 1, 1, 
  0, 1, 1, 1, 0, 
  0, 0, 1, 0, 0, 
  0, 1, 1, 1, 0, 
  1, 1, 0, 1, 1, 
  1, 0, 0, 0, 1, 

  1, 0, 0, 0, 1, 
  1, 0, 0, 0, 1, 
  0, 1, 0, 1, 0, 
  0, 0, 1, 0, 0, 
  0, 0, 1, 0, 0, 
  0, 0, 1, 0, 0, 
  0, 0, 1, 0, 0, 

  1, 1, 1, 1, 1, 
  0, 0, 0, 0, 1, 
  0, 0, 0, 1, 0, 
  0, 0, 1, 0, 0, 
  0, 1, 0, 0, 0, 
  1, 0, 0, 0, 0, 
  1, 1, 1, 1, 1, 

  0, 1, 1, 1, 0, 
  1, 0, 0, 0, 1, 
  1, 0, 0, 1, 1, 
  1, 0, 1, 0, 1, 
  1, 1, 0, 0, 1, 
  1, 0, 0, 0, 1, 
  0, 1, 1, 1, 0, 

  0, 0, 1, 0, 0, 
  0, 1, 1, 0, 0, 
  1, 1, 1, 0, 0, 
  0, 0, 1, 0, 0, 
  0, 0, 1, 0, 0, 
  0, 0, 1, 0, 0, 
  1, 1, 1, 1, 1, 

  0, 1, 1, 1, 0, 
  1, 0, 0, 0, 1, 
  1, 0, 0, 0, 1, 
  0, 0, 0, 1, 0, 
  0, 0, 1, 0, 0, 
  0, 1, 0, 0, 0, 
  1, 1, 1, 1, 1, 

  0, 1, 1, 1, 0, 
  1, 0, 0, 0, 1, 
  0, 0, 0, 0, 1, 
  0, 0, 1, 1, 0, 
  0, 0, 0, 0, 1, 
  1, 0, 0, 0, 1, 
  0, 1, 1, 1, 0, 

  0, 0, 0, 1, 0, 
  0, 0, 1, 1, 0, 
  0, 1, 0, 1, 0, 
  1, 0, 0, 1, 0, 
  1, 1, 1, 1, 1, 
  0, 0, 0, 1, 0, 
  0, 0, 0, 1, 0, 

  1, 1, 1, 1, 1, 
  1, 0, 0, 0, 0, 
  1, 0, 0, 0, 0, 
  0, 1, 1, 1, 0, 
  0, 0, 0, 0, 1, 
  0, 0, 0, 0, 1, 
  1, 1, 1, 1, 0, 

  0, 1, 1, 1, 0, 
  1, 0, 0, 0, 1, 
  1, 0, 0, 0, 0, 
  1, 1, 1, 1, 0, 
  1, 0, 0, 0, 1, 
  1, 0, 0, 0, 1, 
  0, 1, 1, 1, 0, 

  1, 1, 1, 1, 1, 
  0, 0, 0, 0, 1, 
  0, 0, 0, 1, 0, 
  0, 0, 1, 0, 0, 
  0, 1, 0, 0, 0, 
  0, 1, 0, 0, 0, 
  1, 0, 0, 0, 0, 

  0, 1, 1, 1, 0, 
  1, 0, 0, 0, 1, 
  1, 0, 0, 0, 1, 
  0, 1, 1, 1, 0, 
  1, 0, 0, 0, 1, 
  1, 0, 0, 0, 1, 
  0, 1, 1, 1, 0, 

  0, 1, 1, 1, 0, 
  1, 0, 0, 0, 1, 
  1, 0, 0, 0, 1, 
  0, 1, 1, 1, 1, 
  0, 0, 0, 0, 1, 
  1, 0, 0, 0, 1, 
  0, 1, 1, 1, 0
};

int pins[N] = {22, 23, 24, 25, 26};


void setup() {
  // put your setup code here, to run once:
  for(int i=0;i<N;i++)
    pinMode(pins[i], OUTPUT);
  Serial2.begin(9600);
}

void show(char key) {
  int id = -1;
  if(key >= 'a' && key <= 'z')
    id = key-'a';
  if(key >= 'A' && key <= 'Z')
    id = key-'A';
  if(key >= '0' && key <= '9')
    id = key-'0' + 26;
  if(id==-1) {
    Serial2.println("invalid character");
    return;
  }
  for(int i=M-1;i>=0;i--) {
    for(int j=0;j<N;j++) {
      digitalWrite(pins[j], chars[id][i][j] ? HIGH : LOW);
    }
    delay(100);
  }
  for(int j=0;j<N;j++)
    digitalWrite(pins[j], LOW);
  delay(200);
}


void loop() {
  if (Serial2.available() > 0) {
    char key = Serial2.read();
    Serial2.println(key);
    show(key);
  }
}