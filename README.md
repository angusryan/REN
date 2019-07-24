# REN (React Emergency Notification)

*Under Development*

An emergency button designed as a wristband for the elderly to (*REACT*) press in the event of an accident (*EMERGENCY*), notifying (*NOTIFICATION*) family or nursing home staff via an app that an incident has occured.

The wristband will be connected to the internet via WiFi, when the button is pressed in the event of an emergency a ping will be sent up to a server, which will trigger a notification to be displayed on any family members or/and staff mobiles.

The device is being designed in a way that it is *simple yet effecitve*. It should be easy to operate so much so that the elderly can quickly grasp how to use the device with little to no difficulty. 

  # The Hardware

  *MVP*
  - Particle Photon
  - Push Button (undecided on particular button but will test a collection)
  - Coin Battery for power 

  *Production Circuit*
  - ESP8266/Particle P1 (undecided)
  - Push Button (subject to change) 
  - Rechargable LiPo Battery

 # The Software
 
 *Firmware*
   The firmware will be written in C++, and for the *MVP* take advantage of Particles libraries and capabilities to provide a quick          example of the potential of the device. 
 
 *Application*
   The Android application will be written in Kotlin. The current layout is still to be decided.
 

# Potential Integrations 
- Add a GPS incase the elderly leave their tradiontal environment.
- Add a speaker and mic to give the ability for a conversation to be held between the elderly and family until help arrives.
- Accelerometer to detect a fall 
- Heart Rate monitor
- Use speaker to remind to take pills, tell the time or even notify of events on for the day, hairdresser, doctors appointment. 
