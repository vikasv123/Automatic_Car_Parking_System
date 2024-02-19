# Automatic_Car_Parking_System
The Automatic Car Parking System is a project designed to efficiently manage parking spaces using Arduino, IR sensors, an LCD display, breadboard, and jumper wires. The system is programmed to detect the presence of cars in parking slots and display the number of available slots in real-time on the LCD display.

# OUTPUT: [Click Here](https://drive.google.com/file/d/1agFMVPoSXfOcSc7ZRIiOiP2Fn8rNrXBy/view?usp=sharing)

# Components:
1. Arduino Board: Acts as the brain of the system, controlling sensor inputs and display outputs.
2. IR Sensor: Installed at each parking slot to detect the presence of a car. It sends signals to the Arduino when a car enters or leaves a slot.
3. LCD Display: Provides visual feedback to users by displaying the number of available parking slots.
4. Breadboard: Used for prototyping and connecting electronic components securely.
5. Jumper Wires: Connect the components together to establish electrical connections.

# Functionality:
1. Slot Detection: IR sensors are positioned at each parking slot entrance to detect the presence of a car. When a car enters a slot, the sensor sends a signal to the Arduino indicating that the slot is occupied.
2. Data Processing: The Arduino processes the input from all IR sensors to determine the number of available parking slots.
3. Display Update: The current number of available slots is displayed on the LCD screen. If there are cars in some slots, it displays the remaining available slots accordingly.
4. Real-time Updates: As cars enter or leave the parking slots, the system updates the display in real-time to reflect the changes in available slots.
5. User Interface: The LCD display provides clear information to users about the availability of parking spaces, making it easier for them to find an open slot.

# Operation:
- As a car approaches the parking lot, the IR sensor at the entrance detects its presence.
- The Arduino processes the sensor input and updates the available slots count.
- The LCD display shows the current number of available slots, guiding the driver to an open parking space.
- When the car enters a slot, the sensor at that slot detects it and updates the available slots count accordingly.
- Similarly, when a car leaves a slot, the system updates the count to reflect the newly available slot.

# Benefits:
1. Efficient Space Management: The system optimizes the utilization of parking spaces by providing real-time information about available slots.
2. User Convenience: Drivers can quickly identify open parking spaces, reducing the time spent searching for a spot.
3. Improved Traffic Flow: With efficient parking management, traffic congestion within the parking area is minimized.
