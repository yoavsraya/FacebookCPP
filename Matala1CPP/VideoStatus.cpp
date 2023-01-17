#include "VideoStatus.h"

VideoStatus::VideoStatus(string content, string dataName)
{
	setIndex(VIDEO);
	setName(content);
	VideoFileName += dataName += ".mov";
	setTime();
}

string VideoStatus::getDataFileName()
{
	return VideoFileName;
}

void VideoStatus::printContent() const
{
	cout << getContent() << endl;
	cout << "upload time and date: " << getTime() << endl;
	system(VideoFileName.c_str());
	cout << "------------------------------" << endl;
}
