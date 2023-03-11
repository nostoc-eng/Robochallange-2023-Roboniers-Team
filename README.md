# Roboniers Team

Hello!my name is Ahmed Elsayed a member of Roboniers and the one responsible for the programming portion of the robot ,this is a documentation of our project of a line follower robot in the Robochallange 2023 line follower category I have participated with 2 of my teammates Malek and Mariam each responsible for the mechanical and electrical portion of the robot respectively and our coaches Adham Mady and Allaa Mohamed we got third place and got nominated for the international competetion in China Beijing .

# The thought process that went into making our robot:

## components:
+ stm32f103c6tc [^1]
+ cytron motor driver [^2]
+ 600rpm motors 
+ IR sensors[^3]
  
## Mechanical part of robot
  for the mechanical part of the robot that my teammate Malek was responsible for he decided that we want our robot design to be as simple as possible to avoid mechanical mistakes on the long run and thus we settled for a design with two wheels in the back and a caster wheel in the front 

  here is a photo of the design:

## Electrical part of robot:
  My teammate Mariam decided to design a small PCB which contains the IR sensors and the cytron motor driver pins in order to avoid electrical errors like poor circuitry as PCBs are much more reliable and safe 
  ### here is a photo of the PCB design using the EAGLE cad software:

  ![pcb schematic main robohallange](https://user-images.githubusercontent.com/126085162/224484128-f6798943-9c6c-48d3-8875-9ca1d35a2546.png)

  as for the schematic file , it can be found in the main commit if you want to take a look
  
  ## programming part of the robot:
  for the programming that I was responsible for I made a simple line follower algorithm using 3 IR sensor but with diffrent condition, you can also find the code in the main commit.
  
  
  [^1]: https://www.st.com/en/microcontrollers-microprocessors/stm32f103c6.html
  [^2]: https://store.fut-electronics.com/products/dual-channel-dc-motor-driver-10a-each
  [^3]: https://makerselectronics.com/product/infrared-line-follower-sensor
# Lastly here is a photo of us at the awarding ceremony:

![roboniers](https://user-images.githubusercontent.com/126085162/224484962-483e643b-b2a8-46f7-9a6a-41c672d42a75.png)
