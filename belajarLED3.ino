int button= 2;
int nilaitombol;
int count;

int led= 13;
int led2= 12;


void setup(){
pinMode(button, INPUT);
pinMode(led, OUTPUT);
}

void loop(){
nilaitombol= digitalRead(button);

if(nilaitombol == 1){
count++;
delay(200);
if(count==1){
digitalWrite(led, HIGH);
digitalWrite(led2, LOW);
}
if(count==2){
delay(300);
digitalWrite(led2, HIGH);
digitalWrite(led, LOW);
count=0;
}
}
}
