#pragma once
using namespace System::Drawing;

struct imageSize{
	int Width;
	int Height;
};

ref class Wavelet
{
public:
	Wavelet();
	Bitmap^ getWaveletResult(System::String^ filename);	//	return Wavelet

private:
	void openfile(System::String^ filename);
	void setPtr_bit(System::Drawing::Imaging::PixelFormat input);

	void doWavelet();
	void figureOutLH(imageSize input);
	void figureOutLH_Row(imageSize input);
	void figureOutLH_Col(imageSize input);

	int Width_src;
	int Height_src;
	int TotalPixel;
	int negative;	//	-1

	System::Drawing::Bitmap^ Image1;
	System::Drawing::Bitmap^ Image2;
	System::Drawing::Rectangle rect;
	System::Drawing::Imaging::BitmapData^ ImageData1;
	System::Drawing::Imaging::BitmapData^ ImageData2;
	System::IntPtr ptr;
	System::IntPtr ResultPtr;
	System::Byte* p;
	System::Byte* Res;
	int ptr_bit;
};

