int ans=0;
void setup(){//�]�w�A�u���@��
  size(300,300);
  ///float ans=random(60);//�üơA�|�O<60���B�I��
  textSize(30);
  text(ans,20,20);//�e�Xans
}
void draw(){//�e�ϡA�C��60��
  background(#CDB2EA);
  text(ans,20,30);

}
void mousePressed(){//���U�h�A�N����1��
  ans=(int)random(60);//�B�I�Ƥ��ઽ���ܾ��
}
