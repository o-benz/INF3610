<project xmlns="com.autoesl.autopilot.project" name="hls_wrapped_mmult_prj" top="HLS_accel">
    <includePaths/>
    <libraryPaths/>
    <Simulation>
        <SimFlow name="csim"/>
    </Simulation>
    <files xmlns="">
        <file name="../../mmult_test.cpp" sc="0" tb="1" cflags=" -DDB_DEBUG -Wno-unknown-pragmas" blackbox="false"/>
        <file name="mmult_accel.cpp" sc="0" tb="false" cflags="-DDB_DEBUG" blackbox="false"/>
    </files>
    <solutions xmlns="">
        <solution name="solution3_3" status="active"/>
    </solutions>
</project>

