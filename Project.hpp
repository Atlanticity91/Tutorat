#ifndef _PROJECT_HPP_
#define _PROJECT_HPP_

	#include "PBMFile.hpp"

	/**
	 * ReadFile function
	 * @note : Read a PBM file and produce a pixel array based on the file.
	 * @author : ALVES Quentin
	 * @param name[in] : Path to the query file.
	 * @return : A PixelArray.
	 **/
	PixelArray ReadFile( string name );

#endif