#ifndef _FILE_HEADER_HPP_
#define _FILE_HEADER_HPP_

	#include "PixelArray.hpp"

	/**
	 * ReadHeader method
	 * @note : Read all unused lines of the PBM header.
	 * @author : ALVES Quentin
	 * @param file[in] : Reference to the current ifstream used to load the file.
	 **/
	void ReadHeader( ifstream &file );

	/**
	 * MakePixelArray function
	 * @note : Make a pixel array based on the useful PBM header data.
	 * @author : ALVES Quentin
	 * @param file[in] : Reference to the current ifstream used to load the file.
	 * @return : A PixelArray.
	 **/
	PixelArray MakePixelArray( ifstream &file );

	/**
	 * FillPixelArray method
	 * @note : Fill a pixel array with the data of the PBM content section.
	 * @author : ALVES Quentin
	 * @param pixels[out] : Reference to the current pixel array. 
	 * @param file[in] : Reference to the current ifstream used to load the file.
	 **/
	void FillPixelArray( PixelArray &pixels, ifstream &file );

	/**
	 * MakeHeader method
	 * @note : Add the basic header of a PBM file to a file.
	 * @author : ALVES Quentin
	 * @param file[out] : Reference to the file you want add the PBM header.
	 **/
	void MakeHeader( ofstream &file );

	/**
	 * MakeFile method
	 * @note : Add the useful header data and content of a PBM file to a file.
	 * @author : ALVES Quentin
	 * @param pixels[in] : Reference to the data to add in the file.
	 * @param file[out] : Reference to the file you want add the PBM header.
	 **/
	void MakeFile( PixelArray &pixels, ofstream &file );

#endif