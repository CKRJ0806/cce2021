void setup(){//�]�w�A�u���@��
  size(400,200);
}
void draw(){//�e�A�C���e60��
  background(#C8E8F5);
  fill(255);
  ellipse(100,100,180,180);
      //  ���  �e�A��
  fill(255,0,0);
  float start=mouseX/50.0;
  for(int i=0;i<24;i++){
      float shift=2*PI*i/24.0;
      if(i%3==0)fill(0);
      if(i%3==1)fill(#F5E874);
      if(i%3==2)fill(255);
      if(i==0) fill(#FAA505);
      arc(100,100,180,180,shift+0+start,shift+PI/12+start);//�e�X �꩷
  //   ���  �e�A��,�}�l,����
  }
}