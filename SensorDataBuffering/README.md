"Design a sensor Data buffering system"

Scenario:
Building firmware for a gateway that needs temperature sensor data every 1sec.
This data will be:
1. Buffere locally for 60s
2. Sorted to calculate min/max/avg
3. Sent every 15s to the cloud (just print to console in this case) 

This simulates real-time buffering, processing, and transmission logic used in actual devices

