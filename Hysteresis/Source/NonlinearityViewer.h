

#pragma once

#include "HysteresisProcessor.h"

//==============================================================================
/*
*/
class NonlinearityViewer    : public Component
{
public:
    NonlinearityViewer (AudioProcessorValueTreeState& vts);
    ~NonlinearityViewer();

    void paint (Graphics&) override;
    void resized() override;

    void updateCurve();

private:
    Path curvePath;

    HysteresisProcessor processor;

    void processBuffer();
    AudioBuffer<float> dryBuffer;
    AudioBuffer<float> wetBuffer;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (NonlinearityViewer)
};
