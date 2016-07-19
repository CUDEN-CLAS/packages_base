<?php
/**
 * @file
 * cu_news_imports.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function cu_news_imports_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-legacy_topic-explode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'legacy_topic';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['article_import-legacy_topic-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-topic-admissions_replace_multiple';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'topic';
  $feeds_tamper->plugin_id = 'find_replace_multiple';
  $feeds_tamper->settings = array(
    'pairs' => array(
      0 => array(
        'source' => 'ADMISSIONS',
        'target' => 'Academics',
      ),
      1 => array(
        'source' => 'Admissions',
        'target' => 'Academics',
      ),
    ),
  );
  $feeds_tamper->weight = 64;
  $feeds_tamper->description = 'Admissions replace multiple';
  $export['article_import-topic-admissions_replace_multiple'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-topic-archaeology_replace';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'topic';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Archaeology',
    'replace' => 'Science & Technology',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 39;
  $feeds_tamper->description = 'Archaeology to Science & Technology';
  $export['article_import-topic-archaeology_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-topic-architecture_replace_multiple';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'topic';
  $feeds_tamper->plugin_id = 'find_replace_multiple';
  $feeds_tamper->settings = array(
    'pairs' => array(
      0 => array(
        'source' => 'Architecture',
        'target' => 'Arts & Humanities',
      ),
      1 => array(
        'source' => 'Environmental design',
        'target' => 'Arts & Humanities',
      ),
    ),
  );
  $feeds_tamper->weight = 59;
  $feeds_tamper->description = 'Architecture replace multiple';
  $export['article_import-topic-architecture_replace_multiple'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-topic-arts_replace_multiple';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'topic';
  $feeds_tamper->plugin_id = 'find_replace_multiple';
  $feeds_tamper->settings = array(
    'pairs' => array(
      0 => array(
        'source' => 'Arts & Humanities',
        'target' => 'Arts & Humanities',
      ),
      1 => array(
        'source' => 'Writing and Rhetoric, Program for',
        'target' => 'Arts & Humanities',
      ),
      2 => array(
        'source' => 'Women and Gender Studies',
        'target' => 'Arts & Humanities',
      ),
      3 => array(
        'source' => 'Spanish and Portuguese',
        'target' => 'Arts & Humanities',
      ),
      4 => array(
        'source' => 'Theatre and Dance',
        'target' => 'Arts & Humanities',
      ),
      5 => array(
        'source' => 'Art',
        'target' => 'Arts & Humanities',
      ),
      6 => array(
        'source' => 'Visual Arts',
        'target' => 'Arts & Humanities',
      ),
      7 => array(
        'source' => 'Restoration and preservation',
        'target' => 'Arts & Humanities',
      ),
      8 => array(
        'source' => 'Central and East European Studies (CEES)',
        'target' => 'Arts & Humanities',
      ),
      9 => array(
        'source' => 'English',
        'target' => 'Arts & Humanities',
      ),
      10 => array(
        'source' => 'British Studies and Irish Studies',
        'target' => 'Arts & Humanities',
      ),
      11 => array(
        'source' => 'Ethnic Studies',
        'target' => 'Arts & Humanities',
      ),
      12 => array(
        'source' => 'Film Studies',
        'target' => 'Arts & Humanities',
      ),
      13 => array(
        'source' => 'International Film Series',
        'target' => 'Arts & Humanities',
      ),
      14 => array(
        'source' => 'Design Arts',
        'target' => 'Arts & Humanities',
      ),
      15 => array(
        'source' => 'Cultural Activities',
        'target' => 'Arts & Humanities',
      ),
      16 => array(
        'source' => 'Classics',
        'target' => 'Arts & Humanities',
      ),
      17 => array(
        'source' => 'Comparative Literature',
        'target' => 'Arts & Humanities',
      ),
      18 => array(
        'source' => 'Creative Writing',
        'target' => 'Arts & Humanities',
      ),
      19 => array(
        'source' => 'Criticism',
        'target' => 'Arts & Humanities',
      ),
      20 => array(
        'source' => 'French and Italian',
        'target' => 'Arts & Humanities',
      ),
      21 => array(
        'source' => 'MusiciTheory',
        'target' => 'Arts & Humanities',
      ),
      22 => array(
        'source' => 'Asian Languages and Civilizations',
        'target' => 'Arts & Humanities',
      ),
      23 => array(
        'source' => 'Musicology',
        'target' => 'Arts & Humanities',
      ),
      24 => array(
        'source' => 'Art History',
        'target' => 'Arts & Humanities',
      ),
      25 => array(
        'source' => 'Music',
        'target' => 'Arts & Humanities',
      ),
      26 => array(
        'source' => 'Medieval and Early Modern Studies',
        'target' => 'Arts & Humanities',
      ),
      27 => array(
        'source' => 'Germanic and Slavic Languages and Literatures',
        'target' => 'Arts & Humanities',
      ),
      28 => array(
        'source' => 'History',
        'target' => 'Arts & Humanities',
      ),
      29 => array(
        'source' => 'Jewish Studies',
        'target' => 'Arts & Humanities',
      ),
      30 => array(
        'source' => 'Lesbian, Gay, Bisexual, Transgender Studies',
        'target' => 'Arts & Humanities',
      ),
      31 => array(
        'source' => 'Religious Studies',
        'target' => 'Arts & Humanities',
      ),
    ),
  );
  $feeds_tamper->weight = 56;
  $feeds_tamper->description = 'Arts & Humanities replace multiple';
  $export['article_import-topic-arts_replace_multiple'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-topic-athletics_replace_multiple';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'topic';
  $feeds_tamper->plugin_id = 'find_replace_multiple';
  $feeds_tamper->settings = array(
    'pairs' => array(
      0 => array(
        'source' => 'Athletics',
        'target' => 'Athletics',
      ),
      1 => array(
        'source' => 'Academics',
        'target' => 'Athletics',
      ),
      2 => array(
        'source' => 'Olympics',
        'target' => 'Athletics',
      ),
      3 => array(
        'source' => 'Winter Olympics',
        'target' => 'Athletics',
      ),
      4 => array(
        'source' => 'Community Outreach',
        'target' => 'Athletics',
      ),
      5 => array(
        'source' => 'Sports',
        'target' => 'Athletics',
      ),
      6 => array(
        'source' => 'Golf (men)',
        'target' => 'Athletics',
      ),
      7 => array(
        'source' => 'Football',
        'target' => 'Athletics',
      ),
      8 => array(
        'source' => 'Golf (women)',
        'target' => 'Athletics',
      ),
      9 => array(
        'source' => 'Skiing',
        'target' => 'Athletics',
      ),
      10 => array(
        'source' => 'Soccer',
        'target' => 'Athletics',
      ),
      11 => array(
        'source' => 'Cross country',
        'target' => 'Athletics',
      ),
      12 => array(
        'source' => 'Collegiate Sport Club',
        'target' => 'Athletics',
      ),
      13 => array(
        'source' => 'Basketball (men)',
        'target' => 'Athletics',
      ),
      14 => array(
        'source' => 'Basketball (women)',
        'target' => 'Athletics',
      ),
      15 => array(
        'source' => 'Lacrosse',
        'target' => 'Athletics',
      ),
      16 => array(
        'source' => 'Spirit',
        'target' => 'Athletics',
      ),
      17 => array(
        'source' => 'Tennis',
        'target' => 'Athletics',
      ),
      18 => array(
        'source' => 'Track and Field',
        'target' => 'Athletics',
      ),
      19 => array(
        'source' => 'Volleyball',
        'target' => 'Athletics',
      ),
      20 => array(
        'source' => 'International',
        'target' => 'Education & Outreach',
      ),
      21 => array(
        'source' => 'Research',
        'target' => 'Research',
      ),
      22 => array(
        'source' => 'Academics',
        'target' => 'Academics',
      ),
      23 => array(
        'source' => 'Outreach',
        'target' => 'Getting Involved',
      ),
      24 => array(
        'source' => 'Outreach',
        'target' => 'Getting Involved',
      ),
      25 => array(
        'source' => 'Community Outreach',
        'target' => 'Getting Involved',
      ),
      26 => array(
        'source' => 'Global Engagement',
        'target' => 'Getting Involved',
      ),
      27 => array(
        'source' => 'P-12 Outreach',
        'target' => 'Getting Involved',
      ),
      28 => array(
        'source' => 'Civic Engagement',
        'target' => 'Getting Involved',
      ),
      29 => array(
        'source' => 'Climate and Energy Outreach',
        'target' => 'Getting Involved',
      ),
      30 => array(
        'source' => 'Sustainability',
        'target' => 'Safety',
      ),
      31 => array(
        'source' => 'Academics',
        'target' => 'Safety',
      ),
      32 => array(
        'source' => 'Campus Sustainability',
        'target' => 'Safety',
      ),
      33 => array(
        'source' => 'Outreach',
        'target' => 'Safety',
      ),
      34 => array(
        'source' => 'Research',
        'target' => 'Safety',
      ),
      35 => array(
        'source' => 'Student Innovations',
        'target' => 'Safety',
      ),
      36 => array(
        'source' => 'Research & Creative Works',
        'target' => 'Science & Technology',
      ),
      37 => array(
        'source' => 'Centers',
        'target' => 'Science & Technology',
      ),
      38 => array(
        'source' => 'Natural Hazards Center',
        'target' => 'Health & Society',
      ),
      39 => array(
        'source' => 'Center of the American West',
        'target' => 'Arts & Humanities',
      ),
      40 => array(
        'source' => 'BioServe Space Technologies Center (BST)',
        'target' => 'Space',
      ),
      41 => array(
        'source' => 'Center for Advanced Engineering & Technology Education (CAETE)',
        'target' => 'Science & Technology',
      ),
      42 => array(
        'source' => 'Center for Astrophysics & Space Astronomy (CASA)',
        'target' => 'Space',
      ),
      43 => array(
        'source' => 'Center for the Study & Prevention of Violence (CSPV)',
        'target' => 'Health & Society',
      ),
      44 => array(
        'source' => 'Humanities and the Arts, Center for',
        'target' => 'Arts & Humanities',
      ),
      45 => array(
        'source' => 'Arts & Humanities',
        'target' => 'Arts & Humanities',
      ),
      46 => array(
        'source' => 'Aerospace',
        'target' => 'Space',
      ),
      47 => array(
        'source' => 'Bioastronautics',
        'target' => 'Space',
      ),
      48 => array(
        'source' => 'Aeronautics and Astronautics',
        'target' => 'Space',
      ),
      49 => array(
        'source' => 'Astrodynamics & satellite',
        'target' => 'Space',
      ),
      50 => array(
        'source' => 'Aerospace engineering systems',
        'target' => 'Space',
      ),
      51 => array(
        'source' => 'Earth & space sciences',
        'target' => 'Space',
      ),
      52 => array(
        'source' => 'Navigation systems',
        'target' => 'Space',
      ),
      53 => array(
        'source' => 'Space sciences',
        'target' => 'Space',
      ),
      54 => array(
        'source' => 'Instrument technology',
        'target' => 'Space',
      ),
      55 => array(
        'source' => 'Atmospheric & oceanic sciences',
        'target' => 'Space',
      ),
      56 => array(
        'source' => 'Astrophysics & space astronomy',
        'target' => 'Space',
      ),
      57 => array(
        'source' => 'Astrophysical & planetary sciences',
        'target' => 'Space',
      ),
      58 => array(
        'source' => 'Remote sensing',
        'target' => 'Space',
      ),
      59 => array(
        'source' => 'Biotechnology',
        'target' => 'Science & Technology',
      ),
      60 => array(
        'source' => 'Bioastronautics',
        'target' => 'Science & Technology',
      ),
      61 => array(
        'source' => 'Bioelectromagnetics',
        'target' => 'Science & Technology',
      ),
      62 => array(
        'source' => 'Bioaerosols',
        'target' => 'Science & Technology',
      ),
      63 => array(
        'source' => 'Biofluids',
        'target' => 'Science & Technology',
      ),
      64 => array(
        'source' => 'Bioinformatics',
        'target' => 'Science & Technology',
      ),
      65 => array(
        'source' => 'Biorefining',
        'target' => 'Science & Technology',
      ),
      66 => array(
        'source' => 'Biomedical instrumentation',
        'target' => 'Science & Technology',
      ),
      67 => array(
        'source' => 'Biomechanics',
        'target' => 'Science & Technology',
      ),
      68 => array(
        'source' => 'Biomaterials',
        'target' => 'Science & Technology',
      ),
      69 => array(
        'source' => 'Bioscience technology development',
        'target' => 'Science & Technology',
      ),
      70 => array(
        'source' => 'Computational biology',
        'target' => 'Science & Technology',
      ),
      71 => array(
        'source' => 'Pharmaceuticals',
        'target' => 'Science & Technology',
      ),
      72 => array(
        'source' => 'Microbial genetics and genomics',
        'target' => 'Science & Technology',
      ),
      73 => array(
        'source' => 'Environmental bioprocessing',
        'target' => 'Science & Technology',
      ),
      74 => array(
        'source' => 'Space biological systems',
        'target' => 'Science & Technology',
      ),
      75 => array(
        'source' => 'Tissue engineering',
        'target' => 'Science & Technology',
      ),
      76 => array(
        'source' => 'Vaccines',
        'target' => 'Science & Technology',
      ),
      77 => array(
        'source' => 'Health',
        'target' => 'Health & Society',
      ),
      78 => array(
        'source' => 'Disabilities',
        'target' => 'Health & Society',
      ),
      79 => array(
        'source' => 'Drugs and Alcohol',
        'target' => 'Health & Society',
      ),
      80 => array(
        'source' => 'Computations Science & Engineering',
        'target' => 'Science & Technology',
      ),
      81 => array(
        'source' => 'Robotics',
        'target' => 'Science & Technology',
      ),
      82 => array(
        'source' => 'Neural and statistical computation',
        'target' => 'Science & Technology',
      ),
      83 => array(
        'source' => 'Network Devises and Systems',
        'target' => 'Science & Technology',
      ),
      84 => array(
        'source' => 'Human-centered computing',
        'target' => 'Science & Technology',
      ),
      85 => array(
        'source' => 'Software Engineering',
        'target' => 'Science & Technology',
      ),
      86 => array(
        'source' => 'Systems',
        'target' => 'Science & Technology',
      ),
      87 => array(
        'source' => 'Translator construction',
        'target' => 'Science & Technology',
      ),
      88 => array(
        'source' => 'Health Informatics',
        'target' => 'Science & Technology',
      ),
      89 => array(
        'source' => 'Computational pharmacology',
        'target' => 'Science & Technology',
      ),
      90 => array(
        'source' => 'Computational language and education',
        'target' => 'Science & Technology',
      ),
      91 => array(
        'source' => 'Computational Biology',
        'target' => 'Science & Technology',
      ),
      92 => array(
        'source' => 'Energy',
        'target' => 'Environment',
      ),
      93 => array(
        'source' => 'Water',
        'target' => 'Environment',
      ),
      94 => array(
        'source' => 'Wind electricity',
        'target' => 'Environment',
      ),
      95 => array(
        'source' => 'Sustainable transportation & fuels',
        'target' => 'Environment',
      ),
      96 => array(
        'source' => 'Solar conversion',
        'target' => 'Environment',
      ),
      97 => array(
        'source' => 'Nanoscience for energy capture & conversion',
        'target' => 'Environment',
      ),
      98 => array(
        'source' => 'Grid innovation',
        'target' => 'Environment',
      ),
      99 => array(
        'source' => 'Energy public policy, sociology, & economics',
        'target' => 'Environment',
      ),
      100 => array(
        'source' => 'Bioenergy',
        'target' => 'Environment',
      ),
      101 => array(
        'source' => 'Environment',
        'target' => 'Environment',
      ),
      102 => array(
        'source' => 'Air pollution',
        'target' => 'Environment',
      ),
      103 => array(
        'source' => 'Arctic and Alpine',
        'target' => 'Environment',
      ),
      104 => array(
        'source' => 'Atmospheric chemistry',
        'target' => 'Environment',
      ),
      105 => array(
        'source' => 'Water Issues',
        'target' => 'Environment',
      ),
      106 => array(
        'source' => 'Recycling',
        'target' => 'Environment',
      ),
      107 => array(
        'source' => 'Climate change',
        'target' => 'Environment',
      ),
      108 => array(
        'source' => 'Geosciences',
        'target' => 'Environment',
      ),
      109 => array(
        'source' => 'Global change',
        'target' => 'Environment',
      ),
      110 => array(
        'source' => 'Hydrogeosciences',
        'target' => 'Environment',
      ),
      111 => array(
        'source' => 'Geophysics',
        'target' => 'Environment',
      ),
      112 => array(
        'source' => 'Geodynamics',
        'target' => 'Environment',
      ),
      113 => array(
        'source' => 'Geochemistry',
        'target' => 'Environment',
      ),
      114 => array(
        'source' => 'Mineral physics',
        'target' => 'Environment',
      ),
      115 => array(
        'source' => 'Petrology',
        'target' => 'Environment',
      ),
      116 => array(
        'source' => 'Surficial processes',
        'target' => 'Environment',
      ),
      117 => array(
        'source' => 'Quanternary science',
        'target' => 'Environment',
      ),
      118 => array(
        'source' => 'Economic geology',
        'target' => 'Environment',
      ),
      119 => array(
        'source' => 'Institutes',
        'target' => 'Science & Technology',
      ),
      120 => array(
        'source' => 'Alliance for Technology, Learning and Socitey (ATLAS)',
        'target' => 'Science & Technology',
      ),
      121 => array(
        'source' => 'Biofrontiers Institute',
        'target' => 'Science & Technology',
      ),
      122 => array(
        'source' => 'Renewable & Sustainable Energy Institute (RASEI)',
        'target' => 'Environment',
      ),
      123 => array(
        'source' => 'Arctic & Alpine Research (INSTAAR), Institue of',
        'target' => 'Environment',
      ),
      124 => array(
        'source' => 'Atmospheric and Space Physics (LASP), Laboratory of',
        'target' => 'Space',
      ),
      125 => array(
        'source' => 'Energy Initiative',
        'target' => 'Environment',
      ),
      126 => array(
        'source' => 'Cooperative Institute for Research in Environmental Science (CIRES)',
        'target' => 'Environment',
      ),
      127 => array(
        'source' => 'Cognitive Science (ICS), Institute of',
        'target' => 'Science & Technology',
      ),
      128 => array(
        'source' => 'Behavioral Genetics (IBG), Institute for',
        'target' => 'Science & Technology',
      ),
      129 => array(
        'source' => 'JILA',
        'target' => 'Space',
      ),
      130 => array(
        'source' => 'University of Colorado Museum of Natural History',
        'target' => 'Arts & Humanities',
      ),
      131 => array(
        'source' => 'National Renewable Energy Laboratory (NREL)',
        'target' => 'Environment',
      ),
      132 => array(
        'source' => 'National Oceanic and Atmospheric Administration (NOAA)',
        'target' => 'Environment',
      ),
      133 => array(
        'source' => 'Natural Sciences',
        'target' => 'Science & Technology',
      ),
      134 => array(
        'source' => 'Social Sciences',
        'target' => 'Health & Society',
      ),
      135 => array(
        'source' => 'General Science',
        'target' => 'Science & Technology',
      ),
      136 => array(
        'source' => 'MAVEN',
        'target' => 'Space',
      ),
      137 => array(
        'source' => 'Oil and Gas Research',
        'target' => 'Environment',
      ),
    ),
  );
  $feeds_tamper->weight = 65;
  $feeds_tamper->description = 'Athletics (and everthing else) replace multiple';
  $export['article_import-topic-athletics_replace_multiple'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-topic-behavioral_replace';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'topic';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Behavioral sciences',
    'replace' => 'Health & Society',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 38;
  $feeds_tamper->description = 'Behavioral sciences to ';
  $export['article_import-topic-behavioral_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-topic-business_replace_multiple';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'topic';
  $feeds_tamper->plugin_id = 'find_replace_multiple';
  $feeds_tamper->settings = array(
    'pairs' => array(
      0 => array(
        'source' => 'Business',
        'target' => 'Business',
      ),
      1 => array(
        'source' => 'Accounting',
        'target' => 'Business',
      ),
      2 => array(
        'source' => 'Entrepreneurship',
        'target' => 'Business',
      ),
      3 => array(
        'source' => 'Finance',
        'target' => 'Business',
      ),
      4 => array(
        'source' => 'International Business',
        'target' => 'Business',
      ),
      5 => array(
        'source' => 'Management',
        'target' => 'Business',
      ),
      6 => array(
        'source' => 'Marketing',
        'target' => 'Business',
      ),
      7 => array(
        'source' => 'Operations and Information Management (OPIM)',
        'target' => 'Business',
      ),
      8 => array(
        'source' => 'Real Estate',
        'target' => 'Business',
      ),
    ),
  );
  $feeds_tamper->weight = 55;
  $feeds_tamper->description = 'Business replace multiple';
  $export['article_import-topic-business_replace_multiple'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-topic-criminology_replace';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'topic';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Criminology',
    'replace' => 'Health & Society',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 35;
  $feeds_tamper->description = 'Criminology to Health & Society';
  $export['article_import-topic-criminology_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-topic-economics_replace';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'topic';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Economics',
    'replace' => 'Business',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 36;
  $feeds_tamper->description = 'Economics to Business';
  $export['article_import-topic-economics_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-topic-education_replace_multiple';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'topic';
  $feeds_tamper->plugin_id = 'find_replace_multiple';
  $feeds_tamper->settings = array(
    'pairs' => array(
      0 => array(
        'source' => 'Education',
        'target' => 'Education & Outreach',
      ),
      1 => array(
        'source' => 'Educational Foundations, Policy, and Practice (EFPP)',
        'target' => 'Education & Outreach',
      ),
      2 => array(
        'source' => 'Educational Equity and Cultural Diversity (EECD)',
        'target' => 'Education & Outreach',
      ),
      3 => array(
        'source' => 'Educational and Psychological Studies (EPSY)',
        'target' => 'Education & Outreach',
      ),
      4 => array(
        'source' => 'Curriculum and Instruction (C & I)',
        'target' => 'Education & Outreach',
      ),
    ),
  );
  $feeds_tamper->weight = 58;
  $feeds_tamper->description = 'Education replace multiple';
  $export['article_import-topic-education_replace_multiple'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-topic-engineering_replace_multiple';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'topic';
  $feeds_tamper->plugin_id = 'find_replace_multiple';
  $feeds_tamper->settings = array(
    'pairs' => array(
      0 => array(
        'source' => 'Engineering',
        'target' => 'Science & Technology',
      ),
      1 => array(
        'source' => 'Aerospace Engineering Sciences',
        'target' => 'Science & Technology',
      ),
      2 => array(
        'source' => 'Applied Mathematics',
        'target' => 'Science & Technology',
      ),
      3 => array(
        'source' => 'Energy Engineering',
        'target' => 'Science & Technology',
      ),
      4 => array(
        'source' => 'Electrical, computer, energy engineering',
        'target' => 'Science & Technology',
      ),
      5 => array(
        'source' => 'Engineering management',
        'target' => 'Science & Technology',
      ),
      6 => array(
        'source' => 'Engineering Physics',
        'target' => 'Science & Technology',
      ),
      7 => array(
        'source' => 'Electrical',
        'target' => 'Science & Technology',
      ),
      8 => array(
        'source' => 'Computer-aided engineering',
        'target' => 'Science & Technology',
      ),
      9 => array(
        'source' => 'Chemical & Biological Engineering',
        'target' => 'Science & Technology',
      ),
      10 => array(
        'source' => 'Architectural Engineering',
        'target' => 'Science & Technology',
      ),
      11 => array(
        'source' => 'Chemical engineering',
        'target' => 'Science & Technology',
      ),
      12 => array(
        'source' => 'Civil, environmental & architectural engineering',
        'target' => 'Science & Technology',
      ),
      13 => array(
        'source' => 'Computer Science',
        'target' => 'Science & Technology',
      ),
      14 => array(
        'source' => 'Industrial',
        'target' => 'Science & Technology',
      ),
      15 => array(
        'source' => 'Environmental engineering',
        'target' => 'Science & Technology',
      ),
      16 => array(
        'source' => 'Mechanical Engineering',
        'target' => 'Science & Technology',
      ),
      17 => array(
        'source' => 'Micro- and Nanotechnology',
        'target' => 'Science & Technology',
      ),
      18 => array(
        'source' => 'Mining Engineering',
        'target' => 'Science & Technology',
      ),
      19 => array(
        'source' => 'Photogrammetry',
        'target' => 'Science & Technology',
      ),
      20 => array(
        'source' => 'Telecommunications',
        'target' => 'Science & Technology',
      ),
    ),
  );
  $feeds_tamper->weight = 57;
  $feeds_tamper->description = 'Engineering replace multiple';
  $export['article_import-topic-engineering_replace_multiple'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-topic-ethnology_replace';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'topic';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Ethnology',
    'replace' => 'Arts & Humanities',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 37;
  $feeds_tamper->description = 'Ethnology to Arts & Humanities';
  $export['article_import-topic-ethnology_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-topic-explode';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'topic';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 33;
  $feeds_tamper->description = 'Explode';
  $export['article_import-topic-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-topic-find_replace';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'topic';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Communications',
    'replace' => 'Business',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 34;
  $feeds_tamper->description = 'Communications to Business';
  $export['article_import-topic-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-topic-geography_replace';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'topic';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Geography',
    'replace' => 'Science & Technology',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 40;
  $feeds_tamper->description = 'Geography to Science & Technology';
  $export['article_import-topic-geography_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-topic-interdisciplina_replace_multiple';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'topic';
  $feeds_tamper->plugin_id = 'find_replace_multiple';
  $feeds_tamper->settings = array(
    'pairs' => array(
      0 => array(
        'source' => 'Interdisciplinary',
        'target' => 'Academics',
      ),
      1 => array(
        'source' => 'Undergraduate Research Opportunity Program (UROP)',
        'target' => 'Academics',
      ),
      2 => array(
        'source' => 'Top Scholars',
        'target' => 'Academics',
      ),
      3 => array(
        'source' => 'ROTC',
        'target' => 'Academics',
      ),
      4 => array(
        'source' => 'Study Abroad',
        'target' => 'Academics',
      ),
      5 => array(
        'source' => 'Residential Academic Programs (RAPs)',
        'target' => 'Academics',
      ),
      6 => array(
        'source' => 'STEM education',
        'target' => 'Academics',
      ),
      7 => array(
        'source' => 'Presidents Leadership Class (PLC)',
        'target' => 'Academics',
      ),
      8 => array(
        'source' => 'Continuing Education & Professional Development',
        'target' => 'Academics',
      ),
      9 => array(
        'source' => 'INVEST Community Studies',
        'target' => 'Academics',
      ),
      10 => array(
        'source' => 'Peace Corp',
        'target' => 'Academics',
      ),
      11 => array(
        'source' => 'Norlin Scholars',
        'target' => 'Academics',
      ),
    ),
  );
  $feeds_tamper->weight = 63;
  $feeds_tamper->description = 'Interdisciplinary replace multiple';
  $export['article_import-topic-interdisciplina_replace_multiple'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-topic-international_affairs_replace';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'topic';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'International Affairs',
    'replace' => 'Arts & Humanities',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 41;
  $feeds_tamper->description = 'International Affairs';
  $export['article_import-topic-international_affairs_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-topic-journalism_replace_multiple';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'topic';
  $feeds_tamper->plugin_id = 'find_replace_multiple';
  $feeds_tamper->settings = array(
    'pairs' => array(
      0 => array(
        'source' => 'Journalism',
        'target' => 'Health & Society',
      ),
      1 => array(
        'source' => 'Advertising',
        'target' => 'Health & Society',
      ),
      2 => array(
        'source' => 'Broadcast News',
        'target' => 'Health & Society',
      ),
      3 => array(
        'source' => 'Broadcast Production',
        'target' => 'Health & Society',
      ),
      4 => array(
        'source' => 'Media Studies',
        'target' => 'Health & Society',
      ),
      5 => array(
        'source' => 'News-Editorial',
        'target' => 'Health & Society',
      ),
    ),
  );
  $feeds_tamper->weight = 60;
  $feeds_tamper->description = 'Journalism replace multiple';
  $export['article_import-topic-journalism_replace_multiple'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-topic-law_replace_multiple';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'topic';
  $feeds_tamper->plugin_id = 'find_replace_multiple';
  $feeds_tamper->settings = array(
    'pairs' => array(
      0 => array(
        'source' => 'Law',
        'target' => 'Law & Politics',
      ),
      1 => array(
        'source' => 'Technology, entrepreneurship, & intellectual property law',
        'target' => 'Law & Politics',
      ),
      2 => array(
        'source' => 'Juvenile & family law',
        'target' => 'Law & Politics',
      ),
      3 => array(
        'source' => 'American Indian law',
        'target' => 'Law & Politics',
      ),
      4 => array(
        'source' => 'Environmental, energy & natural resources law',
        'target' => 'Law & Politics',
      ),
    ),
  );
  $feeds_tamper->weight = 62;
  $feeds_tamper->description = 'Law replace multiple';
  $export['article_import-topic-law_replace_multiple'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-topic-linguistics_replace';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'topic';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Linguistics',
    'replace' => 'Arts & Humanities',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 49;
  $feeds_tamper->description = 'Linguistics to Arts & Humanities';
  $export['article_import-topic-linguistics_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-topic-music_replace_multiple';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'topic';
  $feeds_tamper->plugin_id = 'find_replace_multiple';
  $feeds_tamper->settings = array(
    'pairs' => array(
      0 => array(
        'source' => 'Music',
        'target' => 'Performances & Concerts',
      ),
      1 => array(
        'source' => 'Special Events',
        'target' => 'Performances & Concerts',
      ),
      2 => array(
        'source' => 'Student Performances (recitals, ensembles)',
        'target' => 'Performances & Concerts',
      ),
      3 => array(
        'source' => 'Takacs Quartet',
        'target' => 'Performances & Concerts',
      ),
      4 => array(
        'source' => 'Theater',
        'target' => 'Performances & Concerts',
      ),
      5 => array(
        'source' => 'Pendulum Series',
        'target' => 'Performances & Concerts',
      ),
      6 => array(
        'source' => 'Musicology Colloquia',
        'target' => 'Performances & Concerts',
      ),
      7 => array(
        'source' => 'Guest Recitals',
        'target' => 'Performances & Concerts',
      ),
      8 => array(
        'source' => 'Musicology',
        'target' => 'Performances & Concerts',
      ),
      9 => array(
        'source' => 'CU Presents (artist series/opera)',
        'target' => 'Performances & Concerts',
      ),
      10 => array(
        'source' => 'Dance',
        'target' => 'Performances & Concerts',
      ),
      11 => array(
        'source' => 'CU in Broomfield',
        'target' => 'Performances & Concerts',
      ),
      12 => array(
        'source' => 'Entrepreneurship Ctr. for Music (more instructional  could MOVE)',
        'target' => 'Performances & Concerts',
      ),
      13 => array(
        'source' => 'Faculty Performances',
        'target' => 'Performances & Concerts',
      ),
    ),
  );
  $feeds_tamper->weight = 61;
  $feeds_tamper->description = 'Music replace multiple';
  $export['article_import-topic-music_replace_multiple'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-topic-natural_science_replace_multiple';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'topic';
  $feeds_tamper->plugin_id = 'find_replace_multiple';
  $feeds_tamper->settings = array(
    'pairs' => array(
      0 => array(
        'source' => 'Natural Sciences',
        'target' => 'Science & Technology',
      ),
      1 => array(
        'source' => 'Psychology and Neuroscience',
        'target' => 'Science & Technology',
      ),
      2 => array(
        'source' => 'Atmospheric and Oceanic Sciences (ATOC - formerly PAOS)',
        'target' => 'Environment',
      ),
      3 => array(
        'source' => 'Astrophysical and Planetary Sciences',
        'target' => 'Space',
      ),
      4 => array(
        'source' => 'Chemistry and Biochemistry',
        'target' => 'Science & Technology',
      ),
      5 => array(
        'source' => 'Ecology and Evolutionary Biology',
        'target' => 'Science & Technology',
      ),
      6 => array(
        'source' => 'Environmental Studies',
        'target' => 'Environment',
      ),
      7 => array(
        'source' => 'Applied Mathematics',
        'target' => 'Science & Technology',
      ),
      8 => array(
        'source' => 'Geography',
        'target' => 'Science & Technology',
      ),
      9 => array(
        'source' => 'Geological Sciences',
        'target' => 'Environment',
      ),
      10 => array(
        'source' => 'Physics',
        'target' => 'Science & Technology',
      ),
      11 => array(
        'source' => 'Plasma physics',
        'target' => 'Science & Technology',
      ),
      12 => array(
        'source' => 'Physics education research',
        'target' => 'Science & Technology',
      ),
      13 => array(
        'source' => 'Nuclear physics',
        'target' => 'Science & Technology',
      ),
      14 => array(
        'source' => 'Biophysics',
        'target' => 'Science & Technology',
      ),
      15 => array(
        'source' => 'Condensed matter physics',
        'target' => 'Science & Technology',
      ),
      16 => array(
        'source' => 'Gravitational physics',
        'target' => 'Science & Technology',
      ),
      17 => array(
        'source' => 'High energy physics',
        'target' => 'Science & Technology',
      ),
      18 => array(
        'source' => 'Atomic, molecular, & optical physics',
        'target' => 'Science & Technology',
      ),
      19 => array(
        'source' => 'Integrative Physiology (formerly Kinesiology and Applied Physiology)',
        'target' => 'Health & Society',
      ),
      20 => array(
        'source' => 'Mathematics',
        'target' => 'Science & Technology',
      ),
      21 => array(
        'source' => 'Molecular, Cellular, & Developmental',
        'target' => 'Science & Technology',
      ),
      22 => array(
        'source' => 'Physics',
        'target' => 'Science & Technology',
      ),
    ),
  );
  $feeds_tamper->weight = 54;
  $feeds_tamper->description = 'Natural Sciences';
  $export['article_import-topic-natural_science_replace_multiple'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-topic-philosophy_replace';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'topic';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Philosophy',
    'replace' => 'Arts & Humanities',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 50;
  $feeds_tamper->description = 'Philosophy to Arts & Humanities';
  $export['article_import-topic-philosophy_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-topic-planning_replace';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'topic';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Planning/policy studies',
    'replace' => 'Law & Politics',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 51;
  $feeds_tamper->description = 'Planning/policy studies to Law & Politics';
  $export['article_import-topic-planning_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-topic-political_science_replace';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'topic';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Political Science',
    'replace' => 'Law & Politics',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 53;
  $feeds_tamper->description = 'Political Science to Law & Politics';
  $export['article_import-topic-political_science_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-topic-popular_replace';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'topic';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Popular Culture',
    'replace' => 'Arts & Humanities',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 48;
  $feeds_tamper->description = 'Popular Culture to Arts & Humanities';
  $export['article_import-topic-popular_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-topic-populations_replace';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'topic';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Populations studies',
    'replace' => 'Health & Society',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 47;
  $feeds_tamper->description = 'Populations studies to Health & Society';
  $export['article_import-topic-populations_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-topic-psychology_replace';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'topic';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Psychology',
    'replace' => 'Science & Technology',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 43;
  $feeds_tamper->description = 'Psychology to Science & Technology';
  $export['article_import-topic-psychology_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-topic-public_affairs_replace';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'topic';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Public affairs',
    'replace' => 'Health & Society',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 42;
  $feeds_tamper->description = 'Public affairs to ';
  $export['article_import-topic-public_affairs_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-topic-social_services_replace';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'topic';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Social services',
    'replace' => 'Health & Society',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 44;
  $feeds_tamper->description = 'Social services to Health & Society';
  $export['article_import-topic-social_services_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-topic-sociological_studies_replace';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'topic';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Sociological studies',
    'replace' => 'Health & Society',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 45;
  $feeds_tamper->description = 'Sociological studies to Health & Society';
  $export['article_import-topic-sociological_studies_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-topic-sociology_replace';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'topic';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Sociology',
    'replace' => 'Health & Society',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 46;
  $feeds_tamper->description = 'Sociology to Health & Society';
  $export['article_import-topic-sociology_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'article_import-topic-speech_replace';
  $feeds_tamper->importer = 'article_import';
  $feeds_tamper->source = 'topic';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Speech, Language, and Hearing Sciences',
    'replace' => 'Science & Technology',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 52;
  $feeds_tamper->description = 'Speech, Language, and Hearing Sciences to Science & Technology';
  $export['article_import-topic-speech_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'audio_import-script-rewrite';
  $feeds_tamper->importer = 'audio_import';
  $feeds_tamper->source = 'Script';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => '[body]

[script]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['audio_import-script-rewrite'] = $feeds_tamper;

  return $export;
}
