/*
  ==============================================================================

    GenerationPanel.h
    Created: 25 Aug 2018 9:13:34pm
    Author:  Pierre-Clément KERNEIS

  ==============================================================================
*/

#pragma once

#include "Panel.h"
#include "ShapeButtons.h"

class Project;
// test
#include "Project.h"
#include "WebAudioGraph.h"

class CodeGenerationPanel : public Panel, public Button::Listener
{
public:
    CodeGenerationPanel (Project& proj);
    
    void resized() override;
    void paint (Graphics &g) override;
    void buttonClicked (Button* b) override;
    
    PanelTreeEmbedded::PanelPreferences getPanelPreferences() override;
    
private:
    BuildButton generateButton;
    PublishButton publishButton;
    
    Project& project;
    
    SharedResourcePointer<TooltipWindow> tooltipWindow;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (CodeGenerationPanel)
};
