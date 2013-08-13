This program created by John Burkardt of Iowa State University (See http://orion.math.iastate.edu/burkardt/g_src/ivcon/ivcon.html for more details).  The program can convert graphics files to a wide range of formats.  I am posting this to github because some of these formats are no longer supported by current graphics software.  Therefore, it could be a handy tool for anyone needing to update their graphics files to a format that is more widely used today. 

The supported formats include:

3DS - AutoCAD 3D Studio Max binary files;
ASE - AutoCAD ASCII export files;
BYU - Movie.BYU surface geometry files;
DXF - AutoCAD DXF files;
GMOD - Golgotha GMOD files;
HRC - SoftImage hierarchy files;
IV - SGI Inventor files;
OBJ - Alias Wavefront files;
POV - Persistence of Vision files (output only);
SMF - Michael Garland's format for QSLIM;
STL/STLA - ASCII Stereolithography files;
STLB - binary Stereolithography files;
TEC - TECPLOT files (output only);
TRI/TRIA - a simple ASCII triangle format requested by Greg Hood;
TRIB - a simple binary triangle format requested by Greg Hood;
TXT - text files (output only);
UCD - Advanced Visual Systems (AVS) Unstructured Cell Data (output only);
VLA - Evans and Sutherland Digistar II VLA files for planetariums;
WRL - VRML (Virtual Reality Modeling Language) files (output only).
XGL - the XGL format, based on the XML language and OpenGl graphics (output only).

To run simply compile the program using a C compiler.  
$ gcc ivcon.c -o ivcon

Then run the program executable with the input file as the first parameter and the desired output file type as the second parameter.
$ ./ivcon mapical_trimmed_color.iv mapical_trimmed_color.wrl

The writer of this code warns that these functions have not been rigorously tested so be mindful.
