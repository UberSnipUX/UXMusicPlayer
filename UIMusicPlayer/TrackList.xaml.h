//
// TrackList.xaml.h
// Declaration of the TrackList class
//

#pragma once

#include "TrackList.g.h"

namespace UIMusicPlayer
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class TrackList sealed
	{
	public:
		TrackList();

	private:
		void goBack(Platform::Object^ sender, Windows::UI::Core::BackRequestedEventArgs^ args);
	};
}
