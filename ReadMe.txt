
### MotionGraphs ###

===========================================================================
DESCRIPTION:

MotionGraphs is an application project that demonstrates a how to use the push method to receive data from Core Motion. It displays graphs of accelerometer, gyroscope and device motion data.

The project has the following classes and protocol, which (except where noted) have corresponding .h and .m file:

GraphView — A UIView subclass that provides the ability to plot accelerometer, gyroscope or device motion data. This is the same GraphView as the one in the AccelerometerGraph sample.

GraphViewController — A view controller that handles the display of accelerometer, gyroscope, and device motion data. Depending on the argument that is passed into its initWithMotionDataType: method it can display graph(s) generated from one of the three data types.

MotionGraphsAppDelegate — A standard implementation of the UIApplicationDelegate protocol. 

"Motion Events" in Event Handling Guide for iPhone OS explains how to use the Core Motion API.

If you run the compiled application on a device that does not have a gyroscope, no gyroscope or device motion data will be available. You cannot effectively run the application on the simulator.

OBSERVATIONS:

This application was created based on an Apple example: https://developer.apple.com/library/ios/samplecode/MotionGraphs/Introduction/Intro.html

I developed this application in Spring 2014 (but I just uploaded it to Github in 2016, :| ). Therefore, there may be some deprecated packages or commands in use. I compiled it before upload and it still works!

At this point, you have to hardcode the IP address that you want to FTP the data to. It should be pretty simple to create a new View and add that information though.
