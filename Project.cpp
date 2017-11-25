#include "Project.hpp"

PixelArray ReadFile( string name ) {
	PixelArray result;
	ifstream file = ifstream( );

	if ( name == "" || name == " " )
		throw runtime_error( "[ ERROR ] > No input file !" );

	file.open( name );

		ReadHeader( file );

		result = MakePixelArray( file );
		FillPixelArray( result, file );

	file.close( );

	return result;
}