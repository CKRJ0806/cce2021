void setup(){//�]�w�A�u���@��
  size(400,200);
}
void draw(){//�e�A�C��e60��
  background(#C8E8F5);
  fill(255);
  ellipse(50,50,80,80);
      //  ���  �e�A��
  fill(225,0,0);
  float start=mouseX/50.0;
  textSize(25);
  text(start,100,100);
  arc(50,50,80,80,0+start,0.1+start);//�e�X �꩷
  //   ���  �e�A��,�}�l,����
}

