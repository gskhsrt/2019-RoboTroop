#include <kipr/botball.h>
// Motor port variables
int left = 2;
int right = 3;
// Servo variables
int closed = 0;
int open = 1100;
int extra = 2047;
int main()
{
    //wait for lights to turn on
   	wait_for_light(0);
	shut_down_in(119);
    
while (digital(0) == 0)
{

    enable_servos();
    set_servo_position(1, closed);
    msleep(500);
    
    //90 degrees turn
    motor(left, 52);
    motor(right, -10);
    msleep(2000);

   

    //Forward after turn
    motor(left, 50);
    motor(right, 50);
    msleep(2800);
    ao();

    //90 degrees turn
    motor(left, -10);
    motor(right, 50);
    msleep(1500);

     //Open servo
    set_servo_position(1, open);
    msleep(500);
    
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
    msleep(5600);
    ao();

    //close servo
    enable_servos();
    set_servo_position(1,closed);
    msleep(500);

    //back up a little bit
    motor(left,-50);
    motor(right,-50);
    msleep(2700);
    ao();

    //turn left towards starting box 
    motor(left,-10);
    motor(right,52);
    msleep(2000);
    ao();

    //go forwards toward the starting box half way
    motor(left,50);
    motor(right,50);
    msleep(1400);
    ao();

    //Close servo 
    set_servo_position(1,closed);
    msleep(500);

    //Open servo
    set_servo_position(1, open);
    msleep(500);

    
     //go forwards toward the starting box the other half
    motor(left,50);
    motor(right,50);
    msleep(1800);
    
    //Back up to release food
    motor(left, -50);
    motor(right, -50);
    msleep(2800);
    ao();

    
    //90 degree right turn back to line 
    motor(left, 40);
    motor(right, -20);
    msleep(2000);
    
    //forwards on line towards back end of course
    motor(left, 50);
    motor(right, 50);
    msleep(2000);
    
    //turn left towards firefighter box
    motor(left, -10);
    motor(right, 50);
    msleep(2000);
    
    //foward towards firefighter box
    motor(left, 50);
    motor(right, 50);
    msleep(1000);
    
    //right turn towards firefighters 
    motor(left, 55);
    motor(right, -10);
    msleep(2000);
    
    //open servo right before firefighter pole
    set_servo_position(1, open);
    
    //forwards towards firefighters 
    motor(left, 50);
    motor(right, 50);
    msleep(4550);
    
     //Turn right towards fire station
    //motor(left, 50);
    //motor(right, -50);
    //msleep(900);
    //ao();

    //Forward toward fire station
    //motor(left, 50);
    //motor(right, 50);
    //msleep(3000);
    //ao();


    int count = 0;


    while (count < 8)
    {
        motor(right, 50);
        motor(left, -50);
        msleep(1000);
        motor(right, 50);
        motor(left, 50);
        msleep(1000);

        count = count + 1;
    }

    //Turn right toward people
    //motor(left, 50);
    //motor(right,-10);
    //msleep(1500);
    //ao();

    //Forward to collect people
    //motor(left, 50);
    //motor(right, 50);
    //msleep(3000);
    //ao();

    // Slowing down servo
    //int initial_position = open;
    //int final_position = closed;
    //int x = 900;
    //set_servo_position(1,initial_position);
    //msleep(200);
    //while(get_servo_position(1)>final_position)
    //{
    //set_servo_position(1,x);
    //msleep(10); // Speed of servo
    //x = x -1; //Moves one click each time

    //}
    //msleep(100);

    disable_servos();
}
    ao();
    return 0;

}
