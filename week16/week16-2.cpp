void setup(){//�]�w�A�u���@��
  size(400,200);
}
void draw(){//�e�A�C��e60��
  background(#C8E8F5);
  fill(225);
  ellipse(50,50,80,80);
      //  ���  �e�A��
  fill(225,0,0);
  float stop=mouseX/50.0;
  text(stop,100,100);//�e�X�r
  arc(50,50,80,80,0,stop);//�e�X �꩷
  //   ���  �e�A��,�}�l,����
}

