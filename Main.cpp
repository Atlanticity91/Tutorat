#include "Project.hpp"

/**
 * main function
 * @note : Main entry of the program.
 * @author : ALVES Quentin
 * @return : An int.
 **/
int main( void ) {
	ifstream file = ifstream( );

	PixelArray pixels1 = ReadFile( "Images/smiley.pbm" );
	PixelArray pixels2 = ReadFile( "Images/smiley_r.pbm" );

	PixelArray fusion = PixelArray( pixels1.size( ) );
	for ( int i = 0; i < fusion.size( ); i++ )
		fusion[ i ] = PixelLine( pixels1[ 0 ].size( ) );

	Fusion( fusion, pixels1, pixels2 );

	DisplayPixelArray( pixels1 );
	DisplayPixelArray( pixels2 );
	DisplayPixelArray( fusion );

	return 0;
}