////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
/// Copyright (C) <%= year %> by <%= companyName %>
///
/// This file is part of the <%= projectName %> project.
///
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// @file                       <%= projectPath %>/Main.test.cxx
/// @author                     <%= authorName %> <<%= authorEmail %>>
/// @date                       <%= date %>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <Setup.test.hpp>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int                             main										(           int                         argc,
                                                                                        char**                      argv                                )
{

    ::testing::InitGoogleTest(&argc, argv) ;

    ::testing::AddGlobalTestEnvironment(new <%= projectPath.toLowerCase() %>::test::Environment(argc >= 2 ? argv[1] : "")) ;
    
    return RUN_ALL_TESTS() ;

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////