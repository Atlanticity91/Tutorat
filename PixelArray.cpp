#include "PixelArray.hpp"

inline char PixelToChar( int pixel ) {
	return ( pixel == 0 ) ? ' ' : '#';
}

void DisplayPixelArray( PixelArray &pixels ) {
	for ( int y = 0; y < pixels.size( ); y++ ) {
		for ( int x = 0; x < pixels[ y ].size( ); x++ ) {
			cout << PixelToChar( pixels[ y ][ x ] );
		}

		cout << '\n';
	}
}

void Reverse( PixelArray &pixels ) {
	for ( int y = 0; y < pixels.size( ); y++ ) {
		for ( int x = 0; x < pixels[ y ].size( ); x++ ) {
			pixels[ y ][ x ] = ( pixels[ y ][ x ] == 0 ) ? 1 : 0;
		}
	}
}

void Fusion( PixelArray &target, PixelArray &in1, PixelArray &in2 ) {
	if ( 
		 target.size( ) == in1.size( ) && 
		 target.size( ) == in2.size( ) &&
		 target[ 0 ].size( ) == in1[ 0 ].size( ) &&
		 target[ 0 ].size( ) == in2[ 0 ].size( ) 
		) {

		int size = in1.size( );
		int sub_size = in1[ 0 ].size( );

		for ( int y = 0; y < size; y++ ) {
			for ( int x = 0; x < sub_size; x++ ) 
				target[ y ][ x ] = in1[ y ][ x ] + in2[ y ][ x ];
		}
	}
}