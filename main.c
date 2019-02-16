#include <kipr/botball.h>
	// Motor port variables
	int left = 2;
	int right = 3;
	// Servo variables
	int closed = 0;
	int open = 1100;
int main()
{	
    enable_servos();
    set_servo_position(1, closed);
    
    //90 degrees turn
    motor(left, 52);
    motor(right, -10);
    msleep(2000);
    
    //Open servo
    enable_servos();
    set_servo_position(1, open);
   	
    //Forward after turn
    motor(left, 50);
    motor(right, 50);
    msleep(2800);
    ao();

    
    
    
    //90 degrees turn
    motor(left, -10);
    motor(right, 50);
    msleep(2000);
    
    //Forward towards food
    motor(left, 50);
    motor(right, 51);
    msleep(3800);
    ao();
    
    // Close servo arm
    // Slowing down servo
    		//int initial_position = open;
    		//int final_position = closed;
    		//int x = 900;
    		//set_servo_position(1,initial_position);
    		//msleep(200);
    			//while(get_servo_position(1)>final_position)
    		//{
        		//set_servo_position(1,x);
        		//msleep(5); // Speed of servo
        		//x = x -1; //Moves one click each time
                    
               // }
    //msleep(100);
    
    //turn not quite 90 degrees to collect more food 
    motor(left, -10);
        motor(right,38);
        msleep(2000);
    ao();
    
    //forward toward second pile of food
    motor(left, 50);
        motor(right,51);
        msleep(2500);
        ao();
    
    //close servo
       set_servo_position(1,closed);
       msleep(500);
    
    //disable servo
    disable_servos();
    ao();
     
    //turn left towards starting box
    motor(left,-10);
        motor(right,50);
        msleep(2000);
    ao();
    
    //go forward into starting box
    motor(left,50);
    motor(right,50);
    msleep(3000);
    ao();
    
    //open servo
    enable_servos();
    set_servo_position(1,open);
    msleep(500);
    
    //back up from starting box
    motor(left,-50);
    motor(right,-50);
    msleep(4500);
    ao();
    
    //turn right towards other piles of food (NEXT WEEK TURN A BIT FARTHER)
    motor(left, 53);
    motor(right,-10);
    msleep(2000);
    ao();
    
    //go forwards toward piles of food
    motor(left,50);
    motor(right,50);
    msleep(6000);
    ao();
    
    //close servo
    enable_servos();
    set_servo_position(1,closed);
    msleep(500);
       
    //back up a little bit
    motor(left,-50);
    motor(right,-50);
        msleep(2000);
    ao();
    
    //turn left towards starting box 
    motor(left,-10);
    motor(right,58);
    msleep(2000);
    ao();
    
    //go forwards toward the starting box
    motor(left,50);
    motor(right,50);
    msleep(3000);
    ao();
    
    
    
    //Close servo
    set_servo_position(1,closed);
    msleep(500);
    
    //Open servo
    set_servo_position(1, open);
    msleep(500);
    
    //Back up to release food
    motor(left, -50);
    motor(right, -50);
    msleep(3500);
    ao();
    
    //Turn right
    motor(left, 50);
    motor(right, -50);
    msleep(1500);
    ao();
    
    //Forward toward people
    motor(left, 50);
    motor(right, 50);
    msleep(1000);
    ao();
	
	//Turn right toward people
	motor(left, 50);
	motor(right, -10);
	msleep(1500);
	ao();
	 
    
    disable_servos();
    ao();
    return 0;
}
