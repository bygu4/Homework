@echo off

set root=%cd%

for /r %%i in (*.vcxproj) do (
    msbuild %%i -nologo -noConsoleLogger
    if exist %%~dpi\Debug\%%~ni.exe (
        cd %%~dpi
        %%~dpi\Debug\%%~ni.exe -test
        if errorlevel 0 (
            echo - %%~ni: test passed
        ) else (
            echo - %%~ni: test failed
        )
        cd %root%
    ) else (
        echo - %%~ni: build failed
    )
)
