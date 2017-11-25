#include "PBMFile.hpp"

void ReadHeader( ifstream &file ) {
	string text;

	for ( int i = 0; i < 2 && !file.eof( ); i++ )
		getline( file, text, '\n' );
}

PixelArray MakePixelArray( ifstream &file ) {
	int size = 0;
	file >> size;
	if ( file.eof( ) )
		return;

	PixelArray pixels = PixelArray( size );
	file >> size;
	if ( file.eof( ) )
		return;
	
	for ( int index = 0; index < pixels.size( ); index++ )
		pixels[ index ] = PixelLine( size );

	return pixels;
}

void FillPixelArray( PixelArray &pixels, ifstream &file ) {
	int value = 0;

	for ( int y = 0; y < pixels.size( ); y++ ) {
		for ( int x = 0; x < pixels[ y ].size( ); x++ ) {
			file >> value;
			
			if ( file.eof( ) )
				return;
			
			pixels[ y ][ x ] = value;
		}
	}
}

void MakeHeader( ofstream &file ) {
	file << "P1" << '\n';
	file << "# Created by our program ! :O" << '\n';
}

void MakeFile( PixelArray &pixels, ofstream &file ) {
	file << pixels.size( );
	file << ' ';
	file << pixels[ 0 ].size( ) << '\n';

	for ( int y = 0; y < pixels.size( ); y++ ) {
		for ( int x = 0; x < pixels[ y ].size( ); x++ ) {
			file << pixels[ y ][ x ] << ' ';
		}

		file << '\n';
	}
}
