#define maju_lsb 1             // Maju --->U 
#define maju_msb 0
#define mundur_lsb 2           // Mundur --->D
#define mundur_msb 0

int biru=212;
int merah=213;
int y[3],*y_ptr;
int nilai[3];
int r;
int zona2=230;
void sendBioloid(unsigned char lsb, unsigned char msb);
void pushbuttonku(int *l);
void suara(int *key);
void warna(int *w);
void setup() {
y_ptr = &y[0];
  // put your setup code here, to run once:
Serial1.begin(57600);
pinMode(16,INPUT);
pushbuttonku(y_ptr);
while(y==1){


a= digitalRead(16);
if(a==1){
y=1;
}
}
}


void loop() {
  // put your main code here, to run repeatedly:
warna(y_ptr);
void suara();
}

void pushbuttonku(int *l){

  while()int y = digitalRead(14);

if(y==1&&*l==0){
digitalWrite(15,LOW);
delay(2000);
digitalWrite(15,HIGH);
*l=1;
}
}


void suara(int *key)
{
 int k =digitalRead(2);
 if(*(key+2)==1&&k==1){
 delay(500);
 sendBioloid(1,0);
 }
 if(*(key+2)==2&&k==1){
   delay(500);
 sendBioloid(2,0);
 }
if(*(key+2)==0||k==0){
 delay(500);
  sendBioloid(2,0);
 } 
}

void warna(int *w){
int war=0;
int a=0;
int semwar=0;

  if(*(w+1)==0){
  while(a<=5){
delay(50);
semwar+= analogRead(A0);
a+=1;
}
war=semwar/5;
}
if (war==biru&&*(w+1)==0){
*(w+2)=1;
*(w+1)=1;
}
if (war==merah&&*(w+1)==0){
*(w+2)=2;
*(w+1)=1;

}}
