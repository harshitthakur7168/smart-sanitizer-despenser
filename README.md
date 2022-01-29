# smart-sanitizer-despenser

In this corona period hand sanitizer is an essential thing. Because it can kill the Covid -19 virus. but use the of normal sanitizer bottle become very danger. When an infected person press the bottle trigger, The virus may spread from this hand sanitizer bottle. We can solve this by using Automatic hand sanitizer bottle. Automatic means, no need to trigger with our hand. Just place your hand near the bottle. the bottle will automatically trigger.


How it's work ?
Here, we use an Ultrasonic distance sensor, Servo motor and Arduino board. here I am using Arduino Uno. You can also use any other microcontroller. When we place our hand in front of the distance sensor, it will help to the Arduino to measure the distance from the sensor to object (here the hand). if the object in the desired range, Arduino will write the servo to 180. Servo motor is mounded on the hand sanitizer bottle. And the trigger of bottle is connected to servo by a thread. When servo motor rotate, the trigger will press.

Here is circuit diagram of the project. We have 3 situation and that clearly explain working of ultrasonic sensor that works on the principle of reflection of waves from a surface and than calculating distance of obstacle with its given speed of wave.

**Situation 1**
When we turn on the system:

![1](https://user-images.githubusercontent.com/96690206/151661507-c9fa9395-4c53-415d-813a-c7c64ec95a64.png)


**Situation 2**
When the object is at distance more than 50 cm from the sensor. This distance is not practical for an ideal sanitizer dispenser but is just for reference purposes.

![2](https://user-images.githubusercontent.com/96690206/151661549-1fb00d09-fe89-45c0-a57d-b423f8c464fc.png)

**Situation 3**
When the object is at distance less than 50 cm from the sensor. We can see servop motor rotates 180 degree from its initial position displaying that it is dispensing sanitizer.

![3](https://user-images.githubusercontent.com/96690206/151661625-69972d3b-fef2-4443-9963-44cda9b77168.png)


**Situation 4**
Finalyy if the object is less than the range in which ultrasonic sensor detects a object it goes to its intial state that is not detecting any object or obstacle.

![4](https://user-images.githubusercontent.com/96690206/151661633-ed260273-6351-4b12-a73b-2fa482aae2eb.png)


Here i have attached link for the tinkercad simulation where you can practically apply all the circuit.
https://www.tinkercad.com/things/bfl6ZA3Qieq-sanitizer-dispenser/editel


P.S. no promo just my advice to use it.
