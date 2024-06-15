# basics
i like to share my understanding of the basics if i really understood it. (maybe i should start my own blog(?))


servo motor

![image](https://github.com/le-nicolas/basics/assets/112614851/bc281644-3174-4ffa-a6ec-ef34ea1f4cae)


servo motor is an electric motor that converts electrical power into mechanical power to precisely control the position, velocity, and acceleration of a mechanical system.


it is made up of:
motor

sensor - for sensor position feedback

encoder - to calculate position and reduce error

usage: 
desired position is sent to the servo via electrical pulses then the motor speed is proportional to the difference between the actual and desired position( slowly turn when its close
and fast if its not)


it has 3 terminals: ground, signal(control) , power
control terminal is driven in pwm waveform(20ms or 50hz)


servo needs to be:
low inertia and high torque for acceleration





Here's my ouput using a simulation software using TinkerCad:

![servo](https://github.com/le-nicolas/basics/assets/112614851/5d4c63c8-08f8-4eea-9a04-af93e2b0b129)
