IMPORT STD;
IMPORT PARQUET;

imageRecord := RECORD
    STRING filename;
    DATA image;
    UNSIGNED8 RecPos{virtual(fileposition)};
END;

#IF(1)
in_image_data := DATASET('~parquet::image', imageRecord, FLAT);
OUTPUT(in_image_data, NAMED('IN_IMAGE_DATA'));
PARQUET.Write(in_image_data, '/home/hpccuser/dev/parquet-legacy/test_data/test_image.parquet');

#END;

#IF(1)
out_image_data := Read({DATA image}, '/home/hpccuser/dev/parquet-legacy/test_data/test_image.parquet');
OUTPUT(out_image_data, NAMED('OUT_IMAGE_DATA'));
#END