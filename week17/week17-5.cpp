void setup(){
  size(400,200);
  textSize(40);
}
int x=100,y=100;
void draw(){
  background(#DAE4F2);
  rect(x,y,50,50);//�e���
}//Q:�ݨD,����B�k��

void keyPressed(){
  if(keyCode==LEFT)x-=10;
  if(keyCode==RIGHT)x+=10;
}

