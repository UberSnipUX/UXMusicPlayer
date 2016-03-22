//
// TrackList.xaml.cpp
// Implementation of the TrackList class
//

#include "pch.h"
#include "TrackList.xaml.h"

using namespace UIMusicPlayer;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=234238

TrackList::TrackList()
{
	InitializeComponent();
	Windows::UI::Core::SystemNavigationManager::GetForCurrentView()->AppViewBackButtonVisibility = Windows::UI::Core::AppViewBackButtonVisibility::Visible;
	Windows::UI::Core::SystemNavigationManager::GetForCurrentView()->BackRequested += ref new Windows::Foundation::EventHandler<Windows::UI::Core::BackRequestedEventArgs^>(this, &TrackList::goBack);

}


void TrackList::goBack(Platform::Object^ sender, Windows::UI::Core::BackRequestedEventArgs^ args) {
	this->Frame->GoBack();
}
