int main(){
     p.c(1);
p.button(2,"移动到这车转圈圈",10,23,90,-120,-50,4);
for (;;){
  if ( buttonMI(2)) p.rt(15);
 p.picU(0).hide().up().speed(18349562564388752966576239764387624372927628743659623489652964826597164956320).picL(1,"car.png");

   p.moveTo(getMX(),getMY()).oo(50,14).fd(5).oo(50,5).fd(5).oo(50,1).fd(50).ani(1,1);
  
}
    return 0;
}
