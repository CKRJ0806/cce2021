void setup(){//�u���@�����]�w
  size(1024,400);
}
void draw(){///���ʪ����A�C��e60��
  if( mousePressed)background(0,255,255);///���U�h�ɡA�G�H�Ŧ�
  else background(203,225,242);//�_�h�A�L�Ŧ�
  textSize(80);//��r���j�p
  text("�����a��Now a is:"+a,212,200); //�e�X��r
}//�ؼ�:��r���t�C���Ф@�U!!!!�j�p
int a=0;
void mousePressed(){
  a++;
}
