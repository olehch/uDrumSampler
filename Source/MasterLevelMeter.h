/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 4.2.3

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_54FAFD92A09C3F02__
#define __JUCE_HEADER_54FAFD92A09C3F02__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "MathHelper.h"
#include <atomic>
#include "EventTimer.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class MasterLevelMeter  : public Component,
                          public SliderListener
{
public:
    //==============================================================================
    MasterLevelMeter ();
    ~MasterLevelMeter();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void showVolume(float value);
    float getVolume() { return mMasterVolume; }
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void sliderValueChanged (Slider* sliderThatWasMoved) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    float mDecMasterVolume = MathHelper::linearToDb(0.05);
    
    std::atomic<float> mMasterVolume = 0.0;
    std::atomic<float> mShowMasterVolume = 0.0;

    EventTimer mGuiUpdateTimer;
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<Slider> sliderMaster;
    ScopedPointer<Slider> masterMeter;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MasterLevelMeter)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_54FAFD92A09C3F02__
