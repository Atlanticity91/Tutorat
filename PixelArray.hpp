#ifndef _PIXEL_ARRAY_HPP_
#define _PIXEL_ARRAY_HPP_
	
	#include <iostream>
	#include <fstream>
	#include <vector>

	using namespace std;
	
	typedef vector< int > PixelLine;
	typedef vector< PixelLine > PixelArray;

	/**
	 * PixelToChar function
	 * @note : Convert the value of a pixel to the corresponding character.
	 * @author : ALVES Quentin
	 * @param pixel[in] : Value of the pixel to convert.
	 * @return : A char.
	 **/
	inline char PixelToChar( int pixel );

	/**
	 * DisplayPixelArray method
	 * @note : Display a pixel array on the console.
	 * @author : ALVES Quentin
	 * @param pixels[in] : Query pixel array to display.
	 **/
	void DisplayPixelArray( PixelArray &pixels );

	/**
	 * Reverse method
	 * @note : Reverse a pixel array; replace every 0 by 1 and every 1 by 0.
	 * @author : ALVES Quentin
	 * @param pixels[in] : Query pixel array to reverse.
	 **/
	void Reverse( PixelArray &pixels );

	/**
	 * Fusion method
	 * @note : Fill the target pixel array with the fusion of in1 and in2.
	 * @author : ALVES Quentin
	 * @param target[out] : Query output array.
	 * @param in1[in] : First input array.
	 * @param in2[in] : Second input array.
	 **/
	void Fusion( PixelArray &target, PixelArray &in1, PixelArray &in2 );

#endif