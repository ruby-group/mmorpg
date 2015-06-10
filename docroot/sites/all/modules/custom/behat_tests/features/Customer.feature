Feature: Create Customer content type
  In order to publish the customer
  As an admin user
  I should be able to successfully create Customers

  @api
  Scenario: Create a customer with all the mandatory fields in
    Given I am logged in as a user with the "administrator" role
    And I am on "/node/add/customer"
    When I fill in "title" with "Company 1"
    And I fill in "Contact Name" with "Joe Hayes"
    And I fill in "Email" with "Joe.Hayes@gmail.com"
    And I check the box "status"
    And I press the "Save" button
    Then I should see the heading "Company 1"

  @api @javascript
  Scenario: Create a customer with all the fields in
    Given I am logged in as a user with the "administrator" role
    And I am on "/node/add/customer"
    When I fill in "title" with "Company 2"
    And I fill in "Contact Name" with "Viru Sehwag"
    And I fill in "Email" with "viru.sehwag@gmail.com"
    And I fill in "Phone" with "987654321"
    And I fill in "Ext" with "080"
    And I fill in "field_cust_fax[und][0][value]" with "12345"
    And I select "United States" from "Country"
    And I wait for AJAX to finish
    Then I fill in "Address 1" with "Address 1"
    And I fill in "ZIP code" with "1234"
    And I fill in "City" with "Alabama"
    And I select "Alabama" from "State"
    And I fill in "Discount" with "10"
    And I fill in "Password" with "Password"
    And I fill in "Notes" with "Notes added"
    Then I click "Publishing options"
    And I check the box "status"
    And I press the "Save" button
    Then I should see the heading "Company 2"

  @api
  Scenario: Validate mandatory fields
    Given I am logged in as a user with the "administrator" role
    And I am on "/node/add/customer"
    And I press the "Save" button
    Then I should see the following <error messages>
    |error messages|
    |Company field is required.|
    |Contact Name field is required.|
    |Email field is required.       |
