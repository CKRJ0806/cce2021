int []a= new int [47];
void setup(){
  size(500,200);
  textSize(30);
  for(int i=0;i<47;i++)a[i]=i;
  //��a[i]���}�C�̡A�n�������������Ʀr
  for(int i=0;i<1000;i++){
    int i1=(int)random(47);
    int i2=(int)random(47);
    int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
  }
}
int N=0;
void draw(){
  background(#A7D8F0);
  for(int i=0;i<N;i++){
    text (a[i],i*80,100);
  }
}
void mousePressed(){
  N++;
}
