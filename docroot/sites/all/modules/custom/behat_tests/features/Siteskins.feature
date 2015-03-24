Feature: Create Site skin content type
  In order to publish the site skin
  As an admin user
  I should be able to successfully create site skin

  @api
  Scenario: Create a basic single image site skin
    Given I am logged in as a user with the "administrator" role
    And I am on "/node/add/siteskin"
    When I select "AXL" from "field_customer[und]"
    And I fill in "title" with "Site Skin 1"
    And I click "files[field_siteskin_image_und_0]"
    And I fill in "field_siteskin_active[und][0][value][date]" with "03/24/2015"
    And I fill in "field_siteskin_active[und][0][value2][date]" with "04/24/2105"
    And I check the box "All"
    And I fill in "field_target_url[und][0][url]" with "http://www.mmorpg.com/adServer/signupLinkClick.cfm?gameId=191&src=playnow_playnow_box"
    And I select "alan" from "field_target_url[und][0][clickmeter_fieldset][group]"
    And I select "s87.eu" from "field_target_url[und][0][clickmeter_fieldset][domain]"
    And I click "Publishing options"
    And I check the box "status"
    And I click "Save"
    Then I should see the link "Site Skin Site Skin 1 has been created."

  Scenario: Create a site skin with multiple images
    Given I am logged in as a user with the "administrator" role
    And I am on "/node/add/siteskin"
    When I select "AXL" from "field_customer[und]"
    And I fill in "title" with "Site Skin 2"
    And I click "files[field_siteskin_image_und_0]"
    And I click "Upload"
    And I click "files[field_siteskin_image_und_0]"
    And I click "Upload"
    And I fill in "field_siteskin_active[und][0][value][date]" with "04/25/2015"
    And I fill in "field_siteskin_active[und][0][value2][date]" with "05/25/2105"
    And I check the box "All"
    And I fill in "field_target_url[und][0][url]" with "http://www.mmorpg.com/adServer/signupLinkClick.cfm?gameId=555&src=playnow_playnow_box"
    And I select "alan" from "field_target_url[und][0][clickmeter_fieldset][group]"
    And I select "s87.eu" from "field_target_url[und][0][clickmeter_fieldset][domain]"
    And I click "Publishing options"
    And I check the box "status"
    And I click "Save"
    Then I should see the link "Site Skin Site Skin 2 has been created."

  Scenario: Create a site skin to be added to the remnant pool
    Given I am logged in as a user with the "administrator" role
    And I am on "/node/add/siteskin"
    When I select "AXL" from "field_customer[und]"
    And I fill in "title" with "Site Skin 3"
    And I click "files[field_siteskin_image_und_0]"
    And I click "Upload"
    And I click "files[field_siteskin_image_und_0]"
    And I click "Upload"
    And I fill in "field_siteskin_active[und][0][value][date]" with "03/26/2015"
    And I fill in "field_siteskin_active[und][0][value2][date]" with "06/25/2105"
    And I check the box "All"
    And I check the box "Remnant Pool "
    And I fill in "field_target_url[und][0][url]" with "http://www.mmorpg.com/adServer/signupLinkClick.cfm?gameId=730&src=playnow_playnow_box"
    And I select "alan" from "field_target_url[und][0][clickmeter_fieldset][group]"
    And I select "s87.eu" from "field_target_url[und][0][clickmeter_fieldset][domain]"
    And I click "Publishing options"
    And I check the box "status"
    And I click "Save"
    Then I should see the link "Site Skin Site Skin 3 has been created."

  Scenario: Site skin added using Preload option



