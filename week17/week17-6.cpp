float x=100,y=100,vx=0,vy=0;
void draw(){//�C��60��,���t�B��
  background(#DAE4F2);
  rect(x,y,50,50);//�e���
  x+=vx;
}//�C��60��,���t�B��
void keyPressed(){
  if(keyCode==LEFT) vx=-1;
  if(keyCode==RIGHT) vx=+1;
}
void keyReleased(){
  vx=0;
}
