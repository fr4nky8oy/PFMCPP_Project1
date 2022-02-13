#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: comp
//  action 1: increase the Gain
comp.increaseTheGain();
//  action 2 : set the Threshold
comp.setThreshold();
//  action 3: change circuit Type
comp.changeCircuitType();

//  2)
//  Noun: flange
//  action 1: set the feedback Amount
flange.setFeedbackAmount();
//  action 2: set frequency Range 
flange.setFrequencyRange();
//  action 3: set the lfo Speed
flange.setLfoSpeed();

//  3) 
//  Noun: delay
//  action 1: set wet Amount
delay.setWetAmount();
//  action 2: set frequency Range 
delay.setFrequencyRange();
//  action 3: set feedback Amount
delay.setFeedbackAmount(); 

//  4)
//  Noun: distortion
//  action 1: set circuitType
distortion.setCircuitType();
//  action 2: set crunch Amount
distortion.setCrunchAmount();
//  action 3: choose frequency Bands
distortion.chooseFrequencyBands();

//  5)
//  Noun: granular
//  action 1: set grains Count 
granular.setGrainsCount();
//  action 2;  set spray Range 
granular.setSprayRange();
//  action 3: set grains Window 
granular.setGrainsWindow();

//  6)
//  Noun: sampler
//  action 1: change sample's Tune  
sampler.changeSampleTune();
//  action 2: set sample's root Key
sampler.setRootKey();
//  action 3: set play Head Position
sampler.setPlayHeadPosition();

//  7)
//  Noun: tape
//  action 1: set the harmonic Coloration 
tape.setHarmonicColor(); 
//  action 2: set the tape Type
tape.setTapeType();
//  action 3: set the jitter Amount
tape.setJitterAmount();

//  8)
//  Noun: vocalTuner
//  action 1: set the musical Scale
vocalTuner.setMusicalScale();
//  action 2: set the musical Key
vocalTuner.setMusicalKey();
//  action 3: set the formants Amount
vocalTuner.setFormantsAmount();

//  9)
//  Noun: eqParametric
//  action 1: change the q Range
eqParametric.changeQRange();
//  action 2: choose the eq's Type
eqParametric.chooseEqType();
//  action 3: set the center Frequency
eqParametric.setCenterFrequency();

//  10)
//  Noun: reverb
//  action 1: set dry Amount
reverb.setDryAmount();
//  action 2: set the preDelay crunchAmount
reverb.setPreDelay();
//  action 3: choose room Type
reverb.chooseRoomType();

#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
