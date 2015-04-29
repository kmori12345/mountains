#include <MeggyJrSimple.h> 
void setup() 
{
  MeggyJrSimpleSetup();  
}

int mountains[]={4,5,6,4,5,3,4,6};

int x=0;
int y=0;




void loop() 
{
  drawShip();
  drawMountains(); //draw array
  DisplaySlate();
  updateMountains();//update array
  delay(450);
  ClearSlate();
  CheckButtonsPress();
  updateShip();//delay                      //clearSlate
  
  
  
  //clearSlate
  
  
}

void updateMountains()
{
  for(int i=0;i<7;i++)
  { 
    mountains[i]=mountains[i+1];
  }  
     mountains[7]=random(6);        //iterate array 0-7
//iterate array 0-7
            //iterate the number of times specified by index                          
}


void drawMountains()
{
  for(int i=0;i<8;i++)
  {
   for (int j=0; j < mountains[i]; j++)
     DrawPx(i,j,Green);
  }
  if(random(2)==0)
  {
    if (mountains[7] < 6)
      mountains[7]+=1;
  }
  else 
  {
    if (mountains[7] > 0)
      mountains[7]-=1;
  }
}

void drawShip()
{
  DrawPx(0,6,1);
  DisplaySlate();
}

void updateShip()
{
  if (Button_Up && y<7)
  {
    y++;
  }
  if (Button_Down && y>0)
  {
    y--;
  }
}






    
    
     //iterate through array 0-7
         //index 0 takes value of 1
        //index 1 takes value of 2
        //index 7 takes some random over2

   
